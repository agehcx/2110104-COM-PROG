#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string target; getline(cin, target);
    string sentence; getline(cin, sentence);

    sentence += ' ';

    string tmp = "";
    int cnt = 0;

    for(int i=0; i<sentence.size(); i++) {
        if(isalpha(sentence[i])) tmp += sentence[i];
        else cnt += (tmp == target), tmp = "";
    }

    cout << cnt;
}

/*
ABC
("ABC aABC AABC ABCAB CABC d ABC k abc ABC" kjdk abc asd 'ABC ajdsABCkjas  ABC' ABC abc ABC ABC ABC ABCABC...ABC
*/