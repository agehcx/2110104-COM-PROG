#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    int cnt = 0, arr[N], tmp[N], srr[N];
    for(int i = 0; i < N; i++) cin >> arr[i];
    for(int i = 0; i < N; i++) cout << arr[i] << ' ';
    cout << '\n';
    
    copy(arr, arr+N, srr);
    sort(srr,srr+N);

    while(!is_sorted(arr, arr+N)) {
        int sz = N;
        for(int i = N - 1; i >= 0; i--) {
            if(arr[i] == srr[i]) sz--;
            else break;
        }
        copy(arr, arr+N, tmp);
        int mxIndex = -1;
        int mxValue = -1;
        for(int i = 0; i < sz; i++) {
            if(mxValue <= arr[i]) {
                mxIndex = i;
                mxValue = arr[i];
            }
        }
        if(mxIndex == 0) {
            for(int i = 0; i < sz; i++) {
                arr[i] = tmp[sz-i-1];
            }
        } else {
            for(int i = 0; i <= mxIndex; i++) {
                arr[i] = tmp[mxIndex-i];
            } 
        }
        for(int i = 0; i < N; i++) cout << arr[i] << ' ';
        cout << '\n';
    }
}