#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin >> arr[i];
    unordered_set<int> s;
    for(int x : arr) {
        if(s.count(target - x)) {
            cout << "true";
            return 0;
        }
        s.insert(x);
    }
    cout << "false";
}
