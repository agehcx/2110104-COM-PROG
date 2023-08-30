#include <bits/stdc++.h>
using namespace std;

int main() {
    const int N = 1e3+5;
    int l[N], r[N], cnt = 0;
    int mx = INT_MIN, mn = INT_MAX;
    for(int i = 0; i < N; i++) {
        cin >> l[i];
        if(l[i] == -998 || l[i] == -999) {
            if(l[i] == -998) {
                for(int i = 0; i < cnt; i++) {
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
            } else {
                for(int i = 0; i < cnt; i++) {
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
            return 0;
        } else {
            cin >> r[i];
            cnt++;
        }
    }
}