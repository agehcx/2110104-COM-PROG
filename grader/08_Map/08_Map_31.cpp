#include<bits/stdc++.h>
using namespace std;

bool cmp1(tuple<long long,double,string,string,string,string> x, tuple<long long,double,string,string,string,string> y) {
    return get<1>(x) > get<1>(y);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    unordered_map<string,int> mp;
    for(int i = 0; i < N; i++) {
        string dep;
        int amount;
        cin >> dep >> amount;
        mp[dep] += amount;
    }
    vector<tuple<long long,double,string,string,string,string>> vec;
    int Mem; cin >> Mem;
    for(int i = 0; i < Mem; i++) {
        long long id;
        double score;
        string fc[4];
        cin >> id >> score;
        for(int j = 0; j < 4; j++) {
            cin >> fc[j];
        }
        vec.push_back(make_tuple(id,score,fc[0],fc[1],fc[2],fc[3]));
    }
    sort(vec.begin(),vec.end(),cmp1);
    vector<pair<long long,string>> ans;
    for(auto & [a,b,c,d,e,f] : vec) {
        if(mp[c]>0) {
            mp[c]--;
            ans.emplace_back(make_pair(a,c));
        } else if(mp[d]>0) {
            mp[d]--;
            ans.emplace_back(make_pair(a,d));
        } else if(mp[e]>0) {
            mp[e]--;
            ans.emplace_back(make_pair(a,e));
        } else {
            mp[f]--;
            ans.emplace_back(make_pair(a,f));
        }
    }
    sort(ans.begin(),ans.end(),less<pair<long long,string>>());
    for(auto & [a,b] : ans) cout << a << ' ' << b << '\n';
}