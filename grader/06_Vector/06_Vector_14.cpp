#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    getline(cin, str);
    
    vector<int> vec;

    vector<int> uniqueCnt(1e6+7, 0);

    string tmp = "";
    int cnt = 0;
    istringstream iss(str);
    while (iss >> tmp) {
        if(uniqueCnt[stoi(tmp)]==0)vec.emplace_back(stoi(tmp));
        uniqueCnt[stoi(tmp)]++;
        tmp = "";
    }

    for(int i = 0; i < 1e6; i++) cnt += (uniqueCnt[i] > 0);
    cout << cnt << '\n';
    sort(vec.begin(), vec.end());
    for(auto it = vec.begin(); it != vec.begin() + 10; it++) {
        cout << *it;
        if( it != vec.begin() + 10) {
            cout << ' ';
        }
    }

}
