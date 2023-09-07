#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> vec;

    int N; cin >> N;

    int szCnt = 1;
    for (int i = 1; i <= N; i++) {
        int x; cin >> x;
        if(szCnt&1) vec.emplace_back(x);
        else vec.emplace(vec.begin(), x);
        szCnt++;
    }
    cin.ignore();
    string str; getline(cin, str);
    vector<int> memo; string tmn = "";
    istringstream iss(str);
    while (iss >> tmn) {
        memo.emplace_back(stoi(tmn));
        tmn = "";
    }
    for(auto& e : memo) {
        if(szCnt&1) vec.emplace_back(e);
        else vec.emplace(vec.begin(), e);
        szCnt++;
    }
    while(getline(cin, str)) {
        if (stoll(str) == -1) {
            break;
        } else {
            int x = stoi(str);
            if (szCnt & 1) vec.emplace_back(x);
            else vec.emplace(vec.begin(), x);
            szCnt++;
        }
    }
    cout << '[';
    for(auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it;
        if (it != vec.end() - 1) {
            string s = ",";
            // s += '\0';
            s += " ";
            cout << string(s);
        }
    }
    cout << ']';
}
