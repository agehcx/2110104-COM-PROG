#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double a, b, c;
    cin >> a >> b >> c;

    long double sqrans = sqrt( b*b - 4*a*c);
    long double f1 = ( -b - sqrans ) / (2 * a);
    long double f2 = ( -b + sqrans ) / (2 * a);

    cout << round(f1 * 1000 ) / 1000 << ' ';
    cout << round(f2 * 1000 ) / 1000 ;
}