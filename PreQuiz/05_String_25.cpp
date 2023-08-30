#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string strBase, strExp;
    while(cin >> strBase >> strExp) {
        if(strBase == "0") {
            cout << ">> 0\n";
            continue;
        }

        int bb, exp;
    
        bb = strBase[strBase.size() - 1] - '0';
        if(strExp.size() > 2) {
            strExp = strExp.substr(strExp.size() - 2);
        }

        exp = stoi(strExp);

        int res = 1;

        for(int i = 1; i <= exp; i++) {
            res *= bb;
            res %= 10;
        }

        cout << ">> " << res << '\n';
    }
}