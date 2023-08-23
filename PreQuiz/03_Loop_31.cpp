#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll POWER(ll BASE, ll EXPONENT) {
    ll ANS = 1;
    for(ll I = 1; I <= EXPONENT; I++) {
        ANS *= BASE;
    }
    return ANS;
}

ll SOLVE(ll N) {
    if(N == 0) return 0;
    ll CNT = 0, SZ = (ll)(floor(log10(N))+1);

    for(int i = 0; i < SZ - 1; i++) 
        CNT += (i+1) * (9 * (POWER(10,i)));

    CNT += (N + 1 - (POWER(10,(ll)(SZ-1)))) * SZ;
    
    return CNT + 1;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;

    cout << SOLVE(b) - SOLVE(max(0LL,a-1));
}