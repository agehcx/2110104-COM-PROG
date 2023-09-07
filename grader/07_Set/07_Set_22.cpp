#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str, tmp;
    int cnt = 0;
    vector<vector<int>> vec;
    while(getline(cin, str)) {
        vec.emplace_back(vector<int>{});
        istringstream iss(str);
        while(iss >> tmp) {
            vec[cnt].emplace_back(stoi(tmp));
        }
        cnt++;
    }
    for(auto & it : vec) sort(it.begin(),it.end());
    string intersectList = "I:";
    set<int> s, s2;
    for(auto & it : vec) { for(auto e : it) s.insert(e); }
    for(auto e : vec[0]) {
        bool chk = true;
        for(auto & it : vec) {
            if(!count(it.begin(),it.end(),e)) chk = false;
        }
        if(chk) intersectList += ' ' + to_string(e);
    }
    for(auto e : vec[0]) s2.insert(e);
    for(int i = 1; i < vec.size(); i++) {
        for(auto e : vec[i]) {
            if(s2.count(e)) s2.erase(e);
        }
    }
    if(s.size()!=0) {
        cout <<"U:";
        for(auto &it : s) {
            cout << ' ' << it;
        } cout << '\n';
    } else {
        cout <<"U: empty set\n";
    }
    if(intersectList != "I:") cout << intersectList << '\n';
    else cout << intersectList << " empty set\n";
    if(!s2.size()) cout << "D: empty set";
    else {
        cout << "D:";
        for(auto e : s2) cout << ' ' << e;
    }
}