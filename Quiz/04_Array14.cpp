#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    double arr[N][M];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    if(N == 1) {
        for(int i = 1; i < M - 1; i++) {
            double avg = arr[N][i-1] + arr[N][i] + arr[N][i+1];
            avg /= 3;
            avg = round(avg*100)/100.0;
            cout << avg << ' ';
        }
    } else {
        for(int i = 1; i < N - 1; i++) {
            for(int j = 1; j < M - 1; j++) {
                double avg = arr[i+1][j-1] + arr[i+1][j] + arr[i+1][j+1];
                avg += arr[i][j-1] + arr[i][j] + arr[i][j+1];
                avg += arr[i-1][j-1] + arr[i-1][j] + arr[i-1][j+1];
                avg /= 9;
                avg = round(avg*100)/100.0;
                cout << avg << ' ';
            }
            cout << '\n';
        }
    }
}