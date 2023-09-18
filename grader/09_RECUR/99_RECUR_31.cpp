#include <bits/stdc++.h>
using namespace std;

set<string> s;

void rec(string str, int l, int r) {
    if(l == r) s.insert(str);
    else {
        for(int i = l; i <= r; i++) {
            string tmp = str;
            swap(tmp[i], tmp[l]);
            rec(tmp, l + 1, r);
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str; cin >> str;
    rec(str, 0, str.size() - 1);
    for(auto & it : s) cout << it << ' ';
}
