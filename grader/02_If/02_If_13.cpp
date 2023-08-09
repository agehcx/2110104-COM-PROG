#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double a, b, c ,d;
    cin >> a >> b >> c >> d;

    long double ss = a + b + c + d;
    ss -= min({a,b,c,d});
    ss -= max({a,b,c,d});
    ss /= 2;

    cout << round(ss * 100.0) / 100.0;
}
