#include <bits/stdc++.h>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double a,b;
    cin >> a >> b;

    long double mosteller = sqrt(a*b) / 60;
    long double haycock = 0.024265 * pow(a,0.5378) * pow(b,0.3964);
    long double boyd = 0.0333 * pow(a,0.6157-(0.0188*log10(a))) * pow(b,0.3);

    cout << setprecision(15) << mosteller << '\n';
    cout << setprecision(15) << haycock << '\n';
    cout << setprecision(15) << boyd << '\n';
    
}