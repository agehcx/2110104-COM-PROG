#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    unordered_map<string,double> mp;
    mp["THB"] = 1;
    for(int i = 0; i < N; i++) {
        string currency; double rate;
        cin >> currency >> rate;
        mp[currency] = rate;
    }
    cin.ignore();
    string tmp, str; getline(cin, str);
    long double money = 1.0 * stoll(str.substr(0,str.find(' ')));
    string exc = str.substr(str.find(' ')+1);
    vector<string> vec;
    istringstream iss(exc);
    while(iss >> tmp) {
        vec.emplace_back(tmp);
    }
    cout << money << ' ' << exc.substr(0,exc.find(' '));
    for(int i = 0; i < vec.size() - 1; i++) {
        money = int((money * mp[vec[i]]) / mp[vec[i+1]]);
        cout << " -> " << (int)money << ' ' << vec[i+1];
    }
}