#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_map<string,string> mp;
    vector<string> vec;
    string a, b;
    while(cin >> a >> b) {
        if(count(vec.begin(),vec.end(),b)==0) vec.emplace_back(b);
        if(mp[b].size()==0) {
            mp[b] = a;
        } else {
            mp[b] += ' ' + a;
        }
    }
    for(auto & e : vec) {
        cout << e << ": " << mp[e] << '\n';
    }
}