#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, m, y;
    cin >> d >> m >> y;
    y = y - 543;

    bool isleap = false;

    if(y % 400 == 0) isleap = true;
    else if(y % 100 == 0) isleap = false;
    else if(y % 4 == 0) isleap = true;

    if(m == 1) cout << d;
    else if(m == 2) cout << d + 31;
    else if(m == 3) cout << d + 59 + isleap;
    else if(m == 3) cout << d + 90 + isleap;
    else if(m == 5) cout << d + 120 + isleap;
    else if(m == 6) cout << d + 151 + isleap;
    else if(m == 7) cout << d + 181 + isleap;
    else if(m == 8) cout << d + 212 + isleap;
    else if(m == 9) cout << d + 243 + isleap;
    else if(m == 10) cout << d + 273 + isleap;
    else if(m == 11) cout << d + 304 + isleap;
    else if(m == 12) cout << d + 334 + isleap;
}
