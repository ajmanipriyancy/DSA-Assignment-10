#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> A(n);
    for(int i=0;i<n;i++) cin >> A[i];
    cin >> m;
    vector<int> B(m);
    for(int i=0;i<m;i++) cin >> B[i];
    
    unordered_set<int> s(A.begin(), A.end());
    vector<int> res;
    for(int x : B) if(s.count(x)) res.push_back(x);
    
    for(int i=0;i<res.size();i++){
        cout << res[i];
        if(i != res.size()-1) cout << ", ";
    }
}
