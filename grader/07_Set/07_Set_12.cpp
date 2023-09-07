#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, cnt = 0;
    set<int> s;
    while(cin >> N) {
        cnt++;
        if(s.count(N)==1) {
            cout << cnt;
            return 0;
        }
        s.insert(N);
    } cout << -1;
}