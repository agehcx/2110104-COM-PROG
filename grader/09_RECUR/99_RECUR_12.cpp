#include <bits/stdc++.h>
using namespace std;

int PowerMod(int a, int k, int m) {
    int res = 1;
    if(k == 0) {
        return 1;
    } else if(k % 2 == 0) {
        res = PowerMod(a, k/2, m);
        res = (res * res) % m;
    } else if(k % 2 == 1) {
        res = PowerMod(a, k/2, m);
        res = (a * (res * res)) % m;
    } 
    return res;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int A, K, M;
    cin >> A >> K >> M;
    cout << PowerMod(A, K, M);
}
