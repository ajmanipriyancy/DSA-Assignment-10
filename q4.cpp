#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++) cin >> nums[i];
    unordered_map<int,int> freq;
    for(int x : nums) freq[x]++;
    for(int x : nums) if(freq[x]==1){ 
        cout << x; 
        return 0;
    }
    cout << -1; // if no non-repeating element
}
