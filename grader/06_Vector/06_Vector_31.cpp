#include<bits/stdc++.h>
using namespace std;

string line = "BINGO";

bool checkBingo(vector<vector<int>> &vec, int cnt) {
    bool isBingo = false;
    int bingoCnt = 0;
    for(int i = 0; i < 5; i++) {
        bingoCnt = 0;
        for(int j = 0; j < 5; j++) bingoCnt += (vec[i][j] <= 0);
        if(bingoCnt == 5) isBingo = true;
        bingoCnt = 0;
        for(int j = 0; j < 5; j++) bingoCnt += (vec[j][i] <= 0);
        if(bingoCnt == 5) isBingo = true;
    }
    bingoCnt = 0;
    for(int i = 0; i < 5; i++) bingoCnt += (vec[i][i] <= 0);
    if(bingoCnt == 5) isBingo = true;
    bingoCnt = 0;
    for(int i = 0; i < 5; i++) bingoCnt += (vec[4-i][i] <= 0);
    if(bingoCnt == 5) isBingo = true;
    if(isBingo) {
        cout << cnt << '\n';
        for(int i = 0; i < 5; i++) {
            bingoCnt = 0;
            for(int j = 0; j < 5; j++) bingoCnt += (vec[i][j] <= 0);
            if(bingoCnt == 5) {
                for(int j = 0; j < 5; j++) {
                    if(vec[i][j] == 0) continue;
                    cout << line[j] << -vec[i][j];
                    if(j != 4) cout << ", ";
                }
                cout << '\n';
            }
        }
        for(int i = 0; i < 5; i++) {
            bingoCnt = 0;
            for(int j = 0; j < 5; j++) bingoCnt += (vec[j][i] <= 0);
            if(bingoCnt == 5) {
                for(int j = 0; j < 5; j++) {
                    if(vec[j][i] == 0) continue;
                    cout << line[i] << -vec[j][i];
                    if(j != 4) cout << ", ";
                }
                cout << '\n';
            }
        }
        bingoCnt = 0;
        for(int j = 0; j < 5; j++) bingoCnt += (vec[j][j] <= 0);
        if(bingoCnt == 5) {
            for(int j = 0; j < 5; j++) {
                if(vec[j][j] == 0) continue;
                cout << line[j] << -vec[j][j];
                if(j != 4) cout << ", ";
            }
            cout << '\n';
        }
        bingoCnt = 0;
        for(int j = 0; j < 5; j++) bingoCnt += (vec[4-j][j] <= 0);
        if(bingoCnt == 5) {
            for(int j = 0; j < 5; j++) {
                if(vec[4-j][j] == 0) continue;
                cout << line[j] << -vec[4-j][j];
                if(j != 4) cout << ", ";
            }
            cout << '\n';
        }
        return true;
    }
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string bingo, str = ""; getline(cin, bingo);
    vector<vector<int>> vec(5,vector<int> (5));
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            string x; cin >> x;
            if(x == "*") vec[i][j] = 0;
            else vec[i][j] = stoi(x);
        }
    }
    int cnt = 0;
    cin.ignore();
    while(getline(cin, bingo)) {
        istringstream iss(bingo);
        while(iss >> str) {
            cnt++;
            int col = line.find(str[0]);
            int num = stoi(str.substr(1));
            for(int i = 0; i < 5; i++) {
                if(vec[i][col] == num) vec[i][col] *= -1;
            }
            if(checkBingo(vec, cnt)) return 0;
        }
    }
}