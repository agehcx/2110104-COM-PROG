#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt = 0;
    map<string,int> mp;
    string song, artist, genre, length;
    while(cin >> song >> artist >> genre >> length) {
        int min = stoi(length.substr(0,length.find(':')));
        int sec = stoi(length.substr(length.find(':')+1));
        int totalTime = min * 60 + sec;
        mp[genre] += totalTime;
    }
    vector<pair<int,string>> vec;
    for(auto & it : mp) {
        vec.emplace_back(make_pair(it.second,it.first));
    }
    sort(vec.begin(),vec.end(),greater<pair<int,string>>());
    for(auto & [u, v]: vec) {
        if(cnt == 3) break;
        cnt++; 
        cout << v << " --> " << u/60 << ':' << u%60 << '\n'; 
    }
}