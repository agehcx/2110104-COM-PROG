#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    map<string, vector<string>> mp;
    string str;
    cin.ignore();
    for(int i = 0; i < N; i++) {
        getline(cin, str);
        string song, singer;
        song = str.substr(0,str.find(','));
        singer = str.substr(str.find(',')+2);
        mp[song].push_back(singer);
    }
    string x;
    getline(cin, x);
    x+=',';
    string tmp = "";
    for(int i = 0; i < x.size(); i++) {
        if(x[i] != ',') {
            tmp += x[i];
        } else {
            cout << tmp << " -> ";
            string ans = "";
            if(mp[tmp].size() == 0) {
                cout << "Not found\n";
                tmp = "";
                i += 1;
                continue;
            }
            for(auto e : mp[tmp]) {
                ans += (e + ", ");
            }
            for(int j = 0; j < ans.size() - 2; j++) cout << ans[j];
            cout << '\n';
            tmp = "";
            i+=1;
        }
    }
}
    
