#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string str;

    while(std::getline(cin ,str)) {
        bool checkSpecial = false;
        bool checkNumeric = false;
        bool checkUppercase = false;
        bool checkLowercase = false;
        
        for(long unsigned int i = 0; i < str.size(); i++) {
            if(str[i] >= '0' && str[i] <='9') checkNumeric = true;
            else if(str[i] >= 'A' && str[i] <= 'Z') checkUppercase = true;
            else if(str[i] >= 'a' && str[i] <= 'z') checkLowercase = true;
            else if(str[i] != ' ') checkSpecial = true;
        }

        if(str.size() >= 12 && checkUppercase && checkLowercase && checkNumeric && checkSpecial) {
            cout << ">> strong\n";
        }
        else if(str.size() >= 8 && checkUppercase && checkLowercase && checkNumeric) {
            cout << ">> weak\n";
        }
        else {
            cout << ">> invalid\n";
        }
    }
}
