#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str, tmp, currStation;
    unordered_map<string,string> mp;
    set<string> s, ans;
    while(getline(cin, str)) {
        if(str.find(' ') == string::npos) {
            currStation = str; break;
        } 
        string origin = str.substr(0,str.find(' '));
        string dest = str.substr(str.find(' ')+1);
        if(mp[origin].size()) mp[origin] += '\n';
        if(mp[dest].size()) mp[dest] += '\n';
        mp[origin] += dest;
        mp[dest] += origin;
    }
    if(mp[currStation] != "") {
        istringstream iss(mp[currStation]);
        while(iss >> tmp) s.insert(tmp), ans.insert(tmp);
        for(auto & it : s) {
            if(mp[it] != "") {
                istringstream iss2(mp[it]);
                while(iss2 >> tmp) {
                    ans.insert(tmp);
                }
            }
        }
        for(auto & it : ans) cout << it << '\n';
    } else cout << currStation;
}