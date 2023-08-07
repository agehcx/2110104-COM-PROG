#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string dmy; 
    cin >> dmy;

    char al = '/';
    int loc;
    loc = dmy.find(al);

    string dd = dmy.substr(0,loc);

    int nl;
    nl = dmy.find(al,loc);

    string mm = dmy.substr(loc+1,nl);

    int nll;
    nll = dmy.find(al,nl+1);

    string yy = dmy.substr(nll+1,dmy.size());

    cout << (mm == "01" ? "JAN" : mm == "02" ? "FEB" : mm == "03" ? "MAR" : mm == "04" ? "APR" : mm == "05" ? "MAY" : mm == "06" ? "JUN" : mm == "07" ? "JUL" : mm == "08" ? "AUG" : mm == "09" ? "SEP" : mm == "10" ? "OCT" : mm == "11" ? "NOV" : "DEC");
    cout << ' ' << stoi(dd) <<", ";
    cout << stoi(yy) - 543;
}