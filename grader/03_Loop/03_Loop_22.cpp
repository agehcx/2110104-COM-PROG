#include <bits/stdc++.h>
using namespace std;

bool DBG = true;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N;
    int tmp = N;

    const int MAXN = 44725;
    int factor[MAXN];
    int factorCnt = 0;

    for(int i=0; i<MAXN; i++) factor[i] = 0;

    for(int i=2; i<=sqrt(N); i++) {
        while(tmp % i == 0) {
            factor[i]++;
            factorCnt++;
            tmp = tmp / i;
        }
        
        if(tmp == 0) break;
    }
    
    if(factorCnt == 0) cout << N;
    
    else {
        for(int i=2; i<=sqrt(N); i++) {
            if(factor[i] != 0) {
                for(int j=0; j<factor[i]; j++) {
                    cout << i;
                    if(--factorCnt != 0) cout <<'*';
                }
            }
        }
    }


}
