#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x): val(x), next(nullptr) {}
};

Node* createList(int n) {
    if(n==0) return nullptr;
    int val; cin >> val;
    Node* head = new Node(val);
    Node* curr = head;
    for(int i=1;i<n;i++){
        cin >> val;
        curr->next = new Node(val);
        curr = curr->next;
    }
    return head;
}

void printList(Node* head){
    while(head){
        cout << head->val << " ";
        head = head->next;
    }
    cout << "\n";
}

int main(){
    int n, m;
    cin >> n >> m;
    Node* head1 = createList(n);
    Node* head2 = createList(m);
    unordered_set<int> s1, s2;
    Node* curr = head1;
    while(curr){ s1.insert(curr->val); curr = curr->next; }
    curr = head2;
    while(curr){ s2.insert(curr->val); curr = curr->next; }

    Node *unionHead = nullptr, *unionTail = nullptr;
    for(int x : s1){
        Node* node = new Node(x);
        if(!unionHead) unionHead = unionTail = node;
        else unionTail->next = node, unionTail = node;
    }
    for(int x : s2){
        if(!s1.count(x)){
            Node* node = new Node(x);
            if(!unionHead) unionHead = unionTail = node;
            else unionTail->next = node, unionTail = node;
        }
    }

    Node *interHead = nullptr, *interTail = nullptr;
    for(int x : s1){
        if(s2.count(x)){
            Node* node = new Node(x);
            if(!interHead) interHead = interTail = node;
            else interTail->next = node, interTail = node;
        }
    }

    printList(unionHead);
    printList(interHead);
}
