#include <bits/stdc++.h>
using namespace std;    

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double xe, ye, re, rp, xm, ym;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    
    long double dist = sqrt( (xm-xe)*(xm-xe) + (ym-ye)*(ym-ye) );
    long double etob = re - rp;

    long double dx = xm - xe;
    long double dy = ym - ye;

    long double ratio = etob / dist;

    long double xb = xe + ratio * dx;
    long double yb = ye + ratio * dy;

    cout << int(round(xb)) << " " << int(round(yb));

}