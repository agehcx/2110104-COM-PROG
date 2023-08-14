#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    float p; cin >> p;
    float k = 1, t = 1;

    t = (t * (365 -(k - 1))) / 365;

    do {
        k++;
        t = (t * (365 - (k - 1))) / 365;
    }
    while(1 - t < p);

    cout << k;

}
