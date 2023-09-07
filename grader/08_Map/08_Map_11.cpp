#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    unordered_map<string,string> mp;
    for(int i = 0; i < N; i++) {
        string name, lastname;
        cin >> name >> lastname;
        mp[name] = lastname;
        mp[lastname] = name;
    }
    int Q; cin >> Q;
    while(Q--) {
        string str;
        cin >> str;
        if(mp.count(str)) cout << mp[str] << '\n';
        else cout << "Not found\n";
    }
}