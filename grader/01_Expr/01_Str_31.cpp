#include <bits/stdc++.h>
using namespace std;

long gcd(long long a, long long b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string A, B, C;
    cin >> A >> B >> C;

    long long div = 1;

    for(int i=0; i<B.size()+C.size(); i++) div *= 10;

    long long fract = (stoi(A) * pow(10,B.size())) + stoi(B);
    long long tmp = fract;

    fract = fract * pow(10,C.size()) + stoi(C);
    div = div - pow(10,B.size());
    fract = fract - tmp;

    long long an = gcd(fract,div);

    cout << fract/an << " / " << div/an;
}
