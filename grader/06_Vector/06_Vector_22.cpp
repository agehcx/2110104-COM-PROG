#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str; getline(cin, str);

    vector<int> vec;
    vector<tuple<int,int,int>> mdr;

    int mx = -1, cnt = 1, pos = -1;
    string tmp = "";
    istringstream iss(str);
    while(iss >> tmp) {
        vec.emplace_back(stoi(tmp));
    }
    vec.emplace_back(-1);
    auto prev = vec.begin();
    for(auto it = vec.begin() + 1; it != vec.end(); it++) {
        if(*it == *prev) cnt++;
        else {
            mx = max(mx, cnt);
            prev = it;
            cnt = 1;
        }
    }
    
    for(int i = 0; i < vec.size() - 1; i++) {
        cnt = 1; 
        for(int j = i + 1; j < vec.size(); j++) {
            if(vec[i] == vec[j]) cnt++;
            else { 
                pos = j; 
                break;
            } 
        }
        if(cnt == mx) mdr.push_back({vec[i],i,pos});
    }
    sort(mdr.begin(), mdr.end());
    for(auto it = mdr.begin(); it != mdr.end(); it++) {
        cout << get<0>(*it) << " --> x[ " << get<1>(*it) << " : " << get<2>(*it) << " ]\n";

    }
}
