#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, cnt = 0; cin >> N;
    int arr[N], ml[N], mr[N];

    for(int i = 0; i < N; i++) cin >> arr[i];

    for(int i = 0; i < N; i++) ml[i] = arr[i], mr[i] = arr[i];

    for(int i = 1; i < N; i++) ml[i] = max(ml[i], ml[i-1]); 

    for(int i = N - 2; i > 0; i--) mr[i] = max(mr[i], mr[i+1]);

    for(int i = 0; i < N; i++) ml[i] = min(ml[i], mr[i]);
    
    for(int i = 0; i < N; i++) cnt += ml[i] - arr[i];
    
    cout << cnt;
}