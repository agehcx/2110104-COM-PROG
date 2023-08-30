#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; cin >> N;
    int mx = INT_MIN, mn = INT_MAX;
    int l[N], r[N];
    for(int i = 0; i < N; i++) cin >> l[i] >> r[i];

    string typ;
    cin >> typ;

    if(typ == "Zig-Zag") {
        for(int i = 0; i < N; i++) {
            if((i+1) & 1) {
                mx = max(mx, r[i]);
                mn = min(mn, l[i]);
            }
            else {
                mx = max(mx, l[i]);
                mn = min(mn, r[i]);
            }
        }
        cout << mn << ' ' << mx;
    }
    else {
        for(int i = 0; i < N; i++) {
            if((i+1) & 1) {
                mx = max(mx, l[i]);
                mn = min(mn, r[i]);
            }
            else {
                mx = max(mx, r[i]);
                mn = min(mn, l[i]);
            }
        }
        cout << mn << ' ' << mx;
    }
}