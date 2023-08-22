#include<bits/stdc++.h>
using namespace std;

void solve() {
    string inp, subbedstr, str = "", sc = "RYGNBPK", lsq = "YGNBPK";
    int score = 0, i = 0, lastr = -1, tmp = 0;
    bool chkconsecutive = true;
    getline(cin, inp);
    for(auto & e : inp) if(e != ' ') str += e;
    if(str[0] != 'R') {
        cout << "WRONG_INPUT\n";
        return;
    }
    for(int i = 1; i < str.size(); i += 2) {
        if (str[i] == 'R') {
            cout << "WRONG_INPUT\n";
            return;
    }}
    for(int i = 0; i < str.size(); i++) if(str[i] == 'R') { lastr = i; }
    string subs = str.substr(lastr + 1 + (lastr + 2 < str.size()));
    for(int i = 0; i < str.size(); i++) score += sc.find(str[i]) + 1;
    for(int i = 0; i < str.size(); i += 2) {
        if(str[i] != 'R') {
            tmp = i;
            break;
    }}
    if(tmp != 0) subbedstr = str.substr(tmp);
    if(subbedstr.find('R') != string::npos || (subbedstr.size() > 0 && subbedstr[0] != 'Y')) chkconsecutive = false;
    cout << ((lsq.find(subs) != string::npos && chkconsecutive)?to_string(score):"WRONG_INPUT") << '\n' ;
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;

    cin.ignore();
    
    for(int i=0; i<N; i++) solve();
}