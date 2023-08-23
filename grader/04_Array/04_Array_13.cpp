#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    int cnt = 0, arr[N];
    for(auto& e : arr) cin >> e;
    
    for(int i=1; i<N-1; i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1]) cnt++;
    }

    cout << cnt;
}