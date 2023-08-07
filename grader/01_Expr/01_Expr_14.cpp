#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int year; cin >> year;

    year = year - 543;
    
    int y = year % 100;

    int nv = ( y + y/4 + 11 ) % 7;

    cout << nv;
}