#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

bool hasDuplicate(TreeNode* root, unordered_set<int>& s) {
    if(!root) return false;
    if(s.count(root->val)) return true;
    s.insert(root->val);
    return hasDuplicate(root->left, s) || hasDuplicate(root->right, s);
}

int main() {
    int n;
    cin >> n;
    vector<TreeNode*> nodes(n);
    for(int i=0;i<n;i++){
        int val; cin >> val;
        nodes[i] = new TreeNode(val);
    }
    for(int i=0;i<n;i++){
        int li, ri;
        cin >> li >> ri; // left and right child index (-1 if null)
        if(li!=-1) nodes[i]->left = nodes[li];
        if(ri!=-1) nodes[i]->right = nodes[ri];
    }
    unordered_set<int> s;
    if(hasDuplicate(nodes[0], s)) cout << "Duplicates Found";
    else cout << "No Duplicates";
}
