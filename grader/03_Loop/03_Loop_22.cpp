#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N;
    int tmp = N;

    string factors = "";
    int factorCnt = 0;

    for(int i=2; i<=sqrt(N); i++) {
        while(tmp % i == 0) {
            factors += to_string(i) + '*';
            factorCnt++;
            tmp = tmp / i;
        }
    }
    
    if(factorCnt == 0) cout << N;
    else cout << factors.substr(0,factors.size()-1);
}
