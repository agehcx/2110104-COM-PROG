#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string typ, str, tmpstr;
    vector<int> item;
    cin >> typ;
    cin.ignore();
    getline(cin, str);

    istringstream iss(str);
    while(iss >> tmpstr) {
        item.emplace_back(stoi(tmpstr));
    }

    vector<vector<int>> vec;
    vector<tuple<int,int,vector<int>,vector<int>>> ans;
    for(auto & e : vec) e.clear();
    if(typ == "first") {
        for(auto & it : item) {
            bool added = false;
            for(auto & tmpitr : vec) {
                if(it + accumulate(tmpitr.begin(),tmpitr.end(),0) <= 100) {
                    tmpitr.emplace_back(it);
                    added = true;
                    break;
                }
            }
            if(!added) vec.emplace_back(vector<int>{it});
        }
    } else {
        for(auto & it : item) {
            int bestIndex = -1;
            int maxSpace = -1;
            for(int i = 0; i < vec.size(); i++) {
                int usedSpace = accumulate(vec[i].begin(),vec[i].end(),0);
                if(it <= 100 - usedSpace && maxSpace < it + usedSpace) {
                    bestIndex = i;
                    maxSpace = it + usedSpace;
                }
            } if(bestIndex == -1) {
                vec.emplace_back(vector<int>{it});
            } else {
                vec[bestIndex].emplace_back(it);
            }
        }
    }
    for(auto & e : vec) {
        int vecSum = accumulate(e.begin(),e.end(),0);
        int revSize = INT_MAX;
        for(auto & it : e) revSize -= it != 0;
        sort(e.begin(),e.end());
        vector<int> revVec;
        for(auto itr : e) revVec.emplace_back(itr);
        for(auto & it : revVec) {
            it = INT_MAX - it;
        }
        ans.emplace_back(make_tuple(vecSum,revSize,revVec,e));
    }
    sort(ans.begin(),ans.end(),greater<tuple<int,int,vector<int>,vector<int>>>());
    for(auto &[a,b,c,d] : ans) {
        for(auto & it : d) {
            if(it) cout << it << ' ';
        }
        cout << '\n';
    }
}