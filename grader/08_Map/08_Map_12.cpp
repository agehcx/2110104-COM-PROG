#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    unordered_map<string,string> mp;
    for(int i = 0; i < N; i++) {
        string a, b, c;
        cin >> a >> b >> c;
        mp[string(a + ' ' + b)] = c;
        mp[c] = string(a + ' ' + b);
    }
    int Q; cin >> Q;
    cin.ignore();
    while(Q--) {
        string str;
        getline(cin, str);
        cout << str << " --> ";
        if(mp.count(str)) cout << mp[str] << '\n';
        else cout <<"Not found\n";
    }
}