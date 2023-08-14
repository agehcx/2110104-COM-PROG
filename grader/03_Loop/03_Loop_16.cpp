#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N;

    for(int i=1; i<N; i++) {
        for(int j=0; j<(N-i); j++) cout << '.';
        if(i != 1) {
            cout << '*';
            for(int j=0; j<2*i-3; j++) cout <<'.';
        }
        cout << "*\n";
    }

    for(int i=0; i<2*N-1; i++) cout <<'*';
}
