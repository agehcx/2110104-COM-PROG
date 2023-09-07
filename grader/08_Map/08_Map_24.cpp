#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N; cin >> N;
    string flavor;
    double qtt, mx = 0, total = 0;
    bool chkDup = false;
    unordered_map<string,double> stock;
    for(int i = 0; i < N; i++) {
        cin >> flavor >> qtt;
        stock[flavor] = qtt;
    }
    map<string,int> sold;
    int Q; cin >> Q;
    for(int i = 0; i < Q; i++) {
        cin >> flavor >> qtt;
        if(stock[flavor]>0) {
            total += qtt*stock[flavor];
            sold[flavor] += qtt*stock[flavor];
            mx = max(mx, double(sold[flavor]));
        }
    }
    vector<pair<double,string>> vec;
    for(auto & it : sold) {
        vec.emplace_back(make_pair(it.second,it.first));
    }
    if(vec.size()) {
        cout << "Total ice cream sales: " << total << '\n';
        cout << "Top sales: ";
        for(auto &[ita, itb] : vec) {
            if(ita == mx) cout << itb << ' ';
        }
    } else {
        cout << "No ice cream sales";
    }
}