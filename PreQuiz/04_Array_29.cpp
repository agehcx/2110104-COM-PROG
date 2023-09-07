#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    int arr[N][4];
    int maxOverlapping = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    pair<int,int> memo[N];
    for(int i = 0; i < N; i++) {
        int width = abs(arr[i][2] - arr[i][0]);
        int length = abs(arr[i][3] - arr[i][1]);
        int area = width * length;
        memo[i].first = area;
        cout << memo[i].first << '\n';
    }
    if(maxOverlapping == 0) {
        cout << "No overlaps";
    } else {
        cout << "Max overlapping area = " << maxOverlapping << '\n';
        // for()
    }
}
