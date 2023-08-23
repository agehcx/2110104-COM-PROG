#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    long double cnt = 0, arr[N], Memo[N];
    for(auto& e : arr) cin >> e;
    
    for(int i = 0; i < N; i++) Memo[i] = 0;
    for(int i = 0; i < N; i++) {
        long double tmp, prev;
        if(i == 0) {
            cout << setprecision(10) << arr[0] << '\n';
            continue;
        }
        for(int j = i; j > 0; j--) {
            if(j == i) {
                tmp = 1 / arr[j];
                prev = tmp;
            }
            else {
                tmp = 1 / (arr[j] + prev);
                prev = tmp;
            }
        }

        cout << setprecision(10) << arr[0] + tmp << '\n';
    }
}