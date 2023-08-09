#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> vec(5, 0);
    for(auto & e : vec) cin >> e;
    sort(vec.begin(),vec.end());

    cout << vec[2];
}
