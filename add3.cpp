#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    unordered_map<int,int> freq;
    for(int x : a) freq[x]++;
    for(int x : b) freq[x]--;
    for(auto &p : freq) if(p.second != 0) { cout << "Not Equal"; return 0; }
    cout << "Equal";
}
