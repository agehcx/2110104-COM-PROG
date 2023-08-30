#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    getline(cin, str);

    int cnt[26]; for(int i = 0; i < 26; i++) cnt[i] = 0;

    for(int i = 0; i < str.size(); i++) isalpha(str[i])? cnt[tolower(str[i])-'a']++ : cnt[0]+=0;

    for(int i = 0; i < 26; i++) {
        if(cnt[i] > 0) cout << char('a'+i) << " -> " << cnt[i] << '\n';
    }
}