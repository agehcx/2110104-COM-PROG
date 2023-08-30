#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, Y_POS; cin >> N;
    int inversionCount = 0, cnt = 0;
    int arr[N][N], order[N*N];
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 0) Y_POS = j;
            else order[cnt++] = arr[i][j];
        }
    }

    for(int i = 0; i < cnt; i++) {
        for(int j = i + 1; j < cnt; j++) {
            if(order[i] > order[j]) inversionCount++;
        }
    }

    if(N&1 && !(inversionCount&1)) cout << "YES";
    else {        
        if((inversionCount&1) && (!(Y_POS&1))) cout << "YES";
        else if((!(inversionCount&1)) && (Y_POS&1)) cout << "YES"; 
        else cout << "NO";
    }

}