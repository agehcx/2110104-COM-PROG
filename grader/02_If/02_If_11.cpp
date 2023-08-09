#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    bool check = true;

    for(auto & e : str) if(!(e>='0' && e<='9')) check = false;

    if(!check) {
        cout << "Error";
        return 0;
    }
    if(!isdigit(str[0])) {
        cout << "Error";
        return 0;
    }
    
    else if (stoi(str) == 1 || stoi(str) == 2) {
        if(str.size() != 2) cout<<"Error";

        else cout <<"OK";
    }
    else if ((stoi(str) >= 20 && stoi(str) <= 40) || stoi(str) == 51 || stoi(str) == 53 || stoi(str) == 55 || stoi(str) == 58 ) {
        if(str.size() != 2) cout<<"Error";
        else cout << "OK";
    } 

    else cout <<"Error";
}

