#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long double a; cin >> a;

    long double L = 0, U = a;

    long double x = (L + U) / 2.0;

    while(! ( abs( a-(x*x) ) <= ( max(a, x*x) / 10000000000.0 ) ) ) {
        if(x*x > a) U = x;
        else if(x*x < a) L = x;
        x = (L + U) / 2.0;
    }

    if( a == 1.0 ) cout << "0.0";
    else cout << log10(x*x);

}
