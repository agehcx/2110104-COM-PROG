#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string Names[][2] = {
        {"Robert", "Dick"},
        {"William", "Bill"},
        {"James", "Jim"},
        {"John", "Jack"},
        {"Margaret", "Peggy"},
        {"Edward", "Ed"},
        {"Sarah", "Sally"},
        {"Andrew", "Andy"},
        {"Anthony", "Tony"},
        {"Deborah", "Debbie"}
    };
    
    int N; cin >> N;
    
    for(int i=0; i<N; i++) {
        string Name; cin >> Name;

        int cnt = 0;

        for(int i=0; i<10; i++) {
            if(Name == Names[i][0]) {
                cout << Names[i][1] << '\n';
            }
            else if(Name == Names[i][1]) {
                cout << Names[i][0] << '\n';
            }
            else cnt++;
            if(cnt == 10) {
                cout << "Not found\n";
            }
        }
    }
}