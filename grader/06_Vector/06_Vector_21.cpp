#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str; getline(cin, str);
    vector<string> vec;

    for(int i = 0; i <= str.size(); i++) {
        string tmp = "";
        tmp += str.substr(i,str.size());
        tmp += '$';
        tmp += str.substr(0,i);
        vec.emplace_back(tmp);
    }

    sort(vec.begin(), vec.end());
    for(auto it = vec.begin(); it != vec.end(); it++) {
        string x = *it;
        cout << x[x.size()-1];
    }
}
