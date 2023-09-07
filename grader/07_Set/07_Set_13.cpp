#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string w, l;
    bool chk = false;
    set<string> winner;
    set<string> loser;
    while(cin >> w >> l) {
        winner.insert(w);
        loser.insert(l);
    }
    for(auto & it : winner) {
        if(loser.count(it)==0) {
            cout << it << ' ';
            chk = true;
        }
    } if(!chk) cout << "None";

}