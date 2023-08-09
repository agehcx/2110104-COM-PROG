#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;
    cin >> x;

    cout << ( x > 2000 ? "Reject" : x > 1000 ? "58" : x > 500 ? "38" : x > 250 ? "28" : x > 100 ? "22" : "18");

}
