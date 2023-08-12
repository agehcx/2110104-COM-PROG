#include <bits/stdc++.h>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long double x;
    cin >> x;
    long double tmp = x;

    if(x >= 1e10) {
        tmp /= 1e9;
        tmp = round(tmp*1.0) / 1.0;
        cout << tmp << 'B';
    }

    else if(x >= 1e9) {
        tmp /= 1e9;
        tmp = round(tmp*10.0) / 10.0;
        cout << tmp << 'B';
    }

    else if(x >= 1e7) {
        tmp /= 1e6;
        tmp = round(tmp*1.0) / 1.0;
        cout << tmp << 'M';
    }

    else if(x >= 1e6) {
        tmp /= 1e6;
        tmp = round(tmp*10.0) / 10.0;
        cout << tmp << 'M';
    }

    else if(x >= 1e4) {
        tmp /= 1e3;
        tmp = round(tmp*1.0) / 1.0;
        cout << tmp << 'K';
    }

    else if(x >= 1e3) {
        tmp /= 1e3;
        tmp = round(tmp*10.0) / 10.0;
        cout << tmp << 'K';
    }

    else {
        cout << tmp;
    }
}
