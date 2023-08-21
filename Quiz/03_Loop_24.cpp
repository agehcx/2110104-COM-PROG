#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;
    getline(cin, str);

    str += ' ';

    char prev = str[0];
    int cnt = 1;

    for(int i=1; i<str.size(); i++) {
        if(prev != str[i]) {
            cout << prev << ' ' << cnt << ' ';
            cnt = 1;
            prev = str[i];
        }
        else cnt++;
    }
}