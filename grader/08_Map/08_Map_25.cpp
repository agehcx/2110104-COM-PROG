#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    cin.ignore();
    unordered_map<string,string> mp, mpAns;
    vector<string> vec, tl, ans;
    string str, id, tmp;
    for(int i = 0; i < N; i ++) {
        getline(cin, str);
        id = str.substr(0,str.find(' '));
        tmp = str.substr(str.find(' '));
        tmp += ' ';
        mp[id] = tmp;
        vec.emplace_back(id);
    }
    string keyID; cin >> keyID;
    string townList = mp[keyID];
    istringstream iss(townList);
    while(iss >> tmp) {
        if(tmp == "*") break;
        tl.emplace_back(tmp);
    }
    for(auto it : vec) {
        for(auto msg : tl) {
            if(it == keyID) continue;
            if(mp[it].find(string(' ' + msg + ' '))!=string::npos && mpAns[it]!="1") {
                ans.emplace_back(it);
                mpAns[it] = "1";
            }
        }
    }
    if(ans.size()) {
        for(auto it : ans) cout << ">> " << it << '\n';
    } else {
        cout << ">> Not Found";
    }

}