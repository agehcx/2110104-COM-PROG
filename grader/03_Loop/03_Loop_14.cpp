#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string sol; getline(cin, sol);
    string ans; getline(cin, ans);

    int score = 0;

    if(sol.size() != ans.size()) {
        cout << "Incomplete answer";
    }

    else {
        for(int i=0; i<sol.size(); i++) {
            if(sol[i] == ans[i]) score++;
        }

        cout << score;
    }

}
