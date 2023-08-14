#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    double sum = 0;
    int cnt = 0;

    while(true) {
        double x;
        cin >> x;
        if(x == -1) break;
        cnt++;
        sum += x;
    }

    if(cnt == 0) cout << "No Data";
    else {
        cout << round((sum/cnt) * 100) / 100;
    }
}
