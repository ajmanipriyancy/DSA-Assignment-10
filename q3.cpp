#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin >> nums[i];
    unordered_map<int,int> freq;
    for(int x : nums) freq[x]++;
    for(auto &p : freq){
        cout << p.first << " -> " << p.second << " ";
        if(p.second==1) cout << "time\n";
        else cout << "times\n";
    }
}
