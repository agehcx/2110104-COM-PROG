#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string typ; cin >> typ;
    string str; getline(cin, str);

    vector<int> vec;
    string tmp = "";
    istringstream iss(str);
    while(iss >> tmp) {
        vec.emplace_back(stoi(tmp));
    }

    if(typ == "first") {

    } else {

    }
}