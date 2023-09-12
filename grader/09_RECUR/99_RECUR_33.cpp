#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, A, B;
    cin >> N >> A >> B;
    vector<vector<int>> vec(10000);
    vector<vector<int>> ans;
    int x, y;
    for(int i = 1; i <= B; i++) vec[i].clear();
    for(int i = 1; i <= N; i++) {
        cin >> x >> y;
        vec[x].push_back(y);
    }
    queue<pair<int,vector<int>>> q;
    q.push({A, {A}});
    while(!q.empty()) {
        int cur = q.front().first;
        vector<int> path = q.front().second;
        q.pop();
        if(!vec[cur].empty()) {
            for(int next : vec[cur]) {
                vector<int> newPath = path;
                newPath.push_back(next);
                q.push({next, newPath});
            }
        }
        if(cur == B) ans.push_back(path);
    }
    if(ans.empty()) cout << "no";
    else cout << "yes";
}
