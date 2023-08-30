#include<bits/stdc++.h>
using namespace std;

bool isNumeric(char x) {
    return ( x >= '0' && x <= '9');
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    getline(cin, str);

    cout << str[0];
    for(int i = 1; i < str.size(); i++) {
        if(isupper(str[i]) || (isNumeric(str[i]) && !isNumeric(str[i-1])) || (!isNumeric(str[i]) && isNumeric(str[i-1]))) cout << ", ";
        cout << str[i];
    }
}