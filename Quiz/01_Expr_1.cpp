#include <bits/stdc++.h>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long double x;
    cin >> x;

    long double up = sqrt(log(pow(x+1,2)));
    long double dw = 10 - x;
    long double usp = pow(x,up);
    long double y = usp / dw;
    cout << round (y * 1e6) / 1e6;

}
