#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int target, x, cnt = 0; cin >> target;
    unordered_set<int> s, s1;
    while(cin >> x) {
        s.insert(x);
    }
    for(auto & it : s) {
        if(target-it != it) s1.insert(target-it);
        if(s1.count(it)) cnt++;
    }
    cout << cnt;
}