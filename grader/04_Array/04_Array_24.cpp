#include<bits/stdc++.h>
using namespace std;

void flip(int *arr, int N) {
    cout << "FLIP \n";
    int tmp[N];
    for(int i = 0; i < N; i++) tmp[i] = arr[N - i - 1];
    for(int i = 0; i < N; i++) arr[i] = tmp[i];
}

void flipToNth(int *arr, int *sortedArr, int N) {
    int tmp[N], pos = -1, mxv = -1, mxpos = -1;
    for(int i = N - 1; i >= 0; i--) {
        if(arr[i] != sortedArr[i]) {
            pos = i;
            break;
        }
    }

    for(int i = 0; i < pos; i++) {
        if(arr[i] > mxv) {
            mxpos = i;
            mxv = arr[i];
        }
    }

    for(int i = 0; i <= mxpos; i++) {
        tmp[i] = arr[mxpos - i];
    }

    for(int i = min(mxpos + 1, N); i < N; i++) {
        tmp[i] = arr[i];        
    }

    for(int i = 0; i < N; i++) arr[i] = tmp[i];
}

bool isSorted(int *arr, int N) {
    cout << "ISSORTED ? \n";
    for(int i = 0; i < N - 1; i++)
        if(arr[i] > arr[i+1]) return false;
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    int cnt = 0, arr[N], sortedArr[N];
    for(auto& e : arr) cin >> e;

    for(int i = 0; i < N; i++) sortedArr[i] = arr[i];

    sort(sortedArr,sortedArr + N);

    for(auto & e : arr) cout << e << ' ';

    flipToNth(arr, sortedArr, N);

    for(auto & e : arr) cout << e << ' ';
    
    cout << '\n' << isSorted(arr, N);

    for(auto & e : arr) cout << e << ' ';
}