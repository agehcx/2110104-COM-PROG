#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str; 
    int K;

    cin >> str >> K;

    str += ' ';

    string ans = "";

    char prev = str[0];
    int cnt = 1, lastpos = 0;

    for(int i=1; i<str.size(); i++) {
        if(str[i] != prev) {
            if(cnt < K) ans += str.substr(lastpos,cnt);
            prev = str[i];  
            lastpos = i;
            cnt = 1;
        } else cnt++;
    }

    cout << ans;
}