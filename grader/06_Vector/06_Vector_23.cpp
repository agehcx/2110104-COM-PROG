#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin>> N;
    vector<pair<double, double>> vec(N);
    for(auto & [x,y] : vec) cin >> x >> y;
    vector<tuple<double, int, double, double>> closest;
    for(int i = 0; i < N; i++) {
        double dist = sqrt(vec[i].first * vec[i].first + vec[i].second * vec[i].second); 
        closest.push_back({dist, i+1, vec[i].first, vec[i].second});
    }
    sort(closest.begin(), closest.end());
    auto it = closest.begin() + 2;
    cout << '#' << get<1>(*it) << ':' << " (" << get<2>(*it) << ", " << get<3>(*it) <<')';
}
