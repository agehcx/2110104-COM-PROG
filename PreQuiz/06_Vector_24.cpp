#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    vector<pair<string,double>> vec;
    while(getline(cin, str)) {
        if(str == "END") break; 
        string flavor = str.substr(0,str.find(' '));
        double price = stod(str.substr(str.find(' ')));
        vec.push_back({flavor,price});
    }
    vector<pair<double,string>> topSales;
    while(cin >> str) {
        bool isValid = false;
        for(auto & it : topSales) {
            if(it.second == str) isValid = true;
        }
        if(!isValid) {
            for(auto & it : vec) {
                if(it.first == str) {
                    topSales.push_back({it.second,it.first});
                }
            }
        } else {
            double price;
            for(auto & it : vec) {
                if(it.first == str) price = it.second;
            }
            for(auto & it : topSales) {
                if(it.second == str) it.first += price;
            }
        }
    }
    sort(topSales.begin(),topSales.end(),greater<pair<double,string>>());
    if(topSales.empty()) cout << "No Sales";
    int cnt = 0;
    for(auto & it : topSales) {
        if(cnt == 3)break;
        cout << it.second << ' ' << it.first << '\n';
        cnt++;

    }
}
