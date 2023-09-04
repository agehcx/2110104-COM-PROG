#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str; getline(cin, str); str += ' ';

    int sp = 0, cnt = 0; for(auto & c : str) if(c == ' ') sp++;
    string splitted[sp], tmp = "", vowels = "aeiou";
    string fW, fV, lW, lV;

    for(int i = 0; i < str.size(); i++) {
        if(str[i] == ' ') splitted[cnt++] = tmp, tmp = "";
        else tmp += str[i];
    }

    bool chk = false;
    for(int i = 0; i < splitted[0].size(); i++) {
        if(vowels.find(splitted[0][i])==string::npos && !chk) {
            fW += splitted[0][i];
            if(i < splitted[0].size() - 1) if(vowels.find(splitted[0][i+1])!=string::npos) chk = true;
        }
        else fV += splitted[0][i];
    }
    chk = false;
    for(int i = 0; i < splitted[sp-1].size(); i++) {
        if(vowels.find(splitted[sp-1][i])==string::npos && !chk) {
            lW += splitted[sp-1][i];
            if(i < splitted[sp-1].size() - 1) if(vowels.find(splitted[sp-1][i+1])!=string::npos) chk = true;
        }
        else lV += splitted[sp-1][i];
    }

    cout << fW << lV << ' ';
    for(int i = 1; i < sp-1; i++) cout << splitted[i] << ' ';
    cout << lW << fV;
}