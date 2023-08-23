#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str; 
    getline(cin, str);
    
    int cnt[10];

    for(int i=0; i<10; i++) cnt[i] = 0;

    for(char c : str) if(c >= '0' && c <= '9') cnt[c - '0']++;

    bool chk = true;

    for(int i=0; i<10; i++) if(cnt[i] == 0) chk = false;
    
    if(chk) cout <<"None";
    else {
        string ans = "";
        for(int i=0; i<10; i++) if(cnt[i] == 0) ans += to_string(i) + ',';
        cout << ans.substr(0,ans.size()-1);
    }
}