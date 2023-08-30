#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str, splitter = "$!%#^@&";
    while(std::getline(cin ,str)) {
        bool chk = false;
        for(char c : str) {
            if(!isalpha(c) && splitter.find(c)!=string::npos) chk ^= 1;
            if(chk && splitter.find(c)==string::npos) cout << c;
        }
        cout << '\n';
    }
}