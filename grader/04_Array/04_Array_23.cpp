#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    string cost[N][2];
    int totalFee = 0;

    for(int i = 0; i < N; i++) {
        string tmp, fees;
        cin >> tmp >> fees;
        cost[i][0] = tmp;
        cost[i][1] = fees; 
    }

    cin.ignore();

    string str;
    getline(cin, str);
    str += ' ';

    string arr[100];

    int cnt = 0;

    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '-') {
            string tmp = "";
            for(int j = i + 1; j < str.size(); j++) {
                if(str[j] != ' ') tmp += str[j];
                else if(str[j] == ' ') break;
            }
            arr[cnt++] = tmp;
        }
    }   

    for(int i = 1; i < cnt; i++) {
        if(arr[i] != arr[i-1]) {
            for(int j = 0; j < N; j++) {
                if(arr[i] == cost[j][0]) totalFee += stoi(cost[j][1]);
            }
        }
    }

    cout << totalFee;
}