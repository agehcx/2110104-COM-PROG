#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;
    cin >> x;

    cout << ( x == 0 ? "zero" : x > 0 ? "positive" : "negative");

    cout << "\n";

    cout << ( x % 2 == 0 ? "even" : "odd");

}
