#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    unordered_map<int,int> freq;
    for(int x : arr) freq[x]++;
    int maxFreq = 0, ans = INT_MIN;
    for(auto &p : freq){
        if(p.second > maxFreq || (p.second == maxFreq && p.first > ans)){
            maxFreq = p.second;
            ans = p.first;
        }
    }
    cout << ans;
}
