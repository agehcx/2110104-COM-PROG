#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b;
    getline(cin, a);
    getline(cin, b);
    string maxa = a, maxb = b;
    int mx = 0;
    for(int i = 0; i < b.size(); i++) {
        string tmp = "";
        int cnt = 0;
        for(int j = 0; j < i; j++) tmp += '-';
        tmp += a;
        for(int j = 0; j < min(tmp.size(),b.size()); j++) {
            if(tmp[j] == b[j]) cnt++;
            if(cnt > mx) {
                mx = cnt;
                maxa = tmp;
                maxb = b;
            }
        }
    }

    for(int i = 0; i < a.size(); i++) {
        string tmp = "";
        int cnt = 0;
        for(int j = 0; j < i; j++) tmp += '-';
        tmp += b;
        for(int j = 0; j < min(tmp.size(),a.size()); j++) {
            if(tmp[j] == a[j]) cnt++;
            if(cnt > mx) {
                mx = cnt;
                maxa = a;
                maxb = tmp;
            }
        }
    }

    cout << maxa << '\n' << maxb << '\n' << mx; 
}