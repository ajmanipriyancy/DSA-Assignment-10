#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x): val(x), next(nullptr) {}
};

bool hasCycle(Node* head) {
    unordered_set<Node*> s;
    while(head) {
        if(s.count(head)) return true;
        s.insert(head);
        head = head->next;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    vector<Node*> nodes(n);
    for(int i=0;i<n;i++) {
        int val;
        cin >> val;
        nodes[i] = new Node(val);
    }
    for(int i=0;i<n-1;i++) nodes[i]->next = nodes[i+1];
    int loop_index;
    cin >> loop_index; // index of node to link last node to (-1 if no loop)
    if(loop_index!=-1) nodes[n-1]->next = nodes[loop_index];
    cout << (hasCycle(nodes[0]) ? "true" : "false");
}
