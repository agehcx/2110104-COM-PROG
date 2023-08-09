#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string x;
    cin >> x;

    bool check = true;

    if(x[0] != '0') {
        cout << "Not a mobile number";
        return 0;
    }
    
    else if(!(x[1] == '6' || x[1] == '8' || x[1] == '9')) {
        cout << "Not a mobile number";
        return 0;
    }

    else if(x.size() != 10) {
        cout << "Not a mobile number";
        return 0;
    } 

    else cout << "Mobile number";

}
