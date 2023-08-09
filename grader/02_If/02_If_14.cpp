#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long ia, ib;
    double ga, gb;
    char gat[3], gbt[3];

    cin >> ia >> ga >> gat[0] >> gat[1] >> gat[2];
    cin >> ib >> gb >> gbt[0] >> gbt[1] >> gbt[2];

    bool ca = true;
    bool cb = true;
    char chk;

    if(gat[0] > 'A') ca = false;
    if(gbt[0] > 'A') cb = false;

    if(gat[1] > 'C') ca = false;
    if(gbt[1] > 'C') cb = false;

    if(gat[2] > 'C') ca = false;
    if(gbt[2] > 'C') cb = false;

    if(ca && cb && (ga == gb) && (gat[1] == gbt[1]) && (gat[2] == gbt[2])) {
        cout << "Both";
    }
    else if(ca & cb && (ga == gb)) {
        if(gat[1] < gbt[1]) {
            cout << ia;
        }
        else if(gat[1] > gbt[1]) {
            cout << ib;
        }
        else {
            if(gat[2] < gbt[2]) {
                cout << ia;
            }
            else {
                cout << ib;
            }
        }
    }
    else if(ca && cb && (ga > gb)) {
        cout << ia;
    }
    else if(ca && cb && (gb > ga)) {
        cout << ib;
    }
    else if(ca && !cb) {
        cout << ia;
    }
    else if(!ca && cb) {
        cout << ib;
    }
    else {
        cout << "None";
    }
}
