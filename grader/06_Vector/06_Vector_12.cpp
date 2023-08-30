#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    vector<int> vec;

    vec.emplace_back(N);

    while(N != 1) {
        if(N & 1) N = 3 * N + 1;
        else N = N / 2;
        if(vec.size() == 15) vec.erase(vec.begin());
        vec.emplace_back(N);
    }
    for(auto it = vec.begin(); it != vec.end(); it++) {
        cout << *it;
        if(it != vec.end() - 1) cout << "->";
    }
}
