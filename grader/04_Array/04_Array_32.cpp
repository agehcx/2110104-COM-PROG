#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    int arr[N][3];
    for(int i = 0; i < N; i++) {
    for(int j = 0; j < 3; j++) {
        cin >> arr[i][j];
    }}

    int Q; cin >> Q;
    while(Q--) {
        int currFloor, targetFloor;
        cin >> currFloor >> targetFloor;

        int numBestElevator = -1;
        int minCost = INT_MAX;

        for(int i = 0; i < N; i++) {
            int cost = 0;
            auto [liftNum, currLift, destination] = arr[i];
            // if(currLift <= currFloor && currFloor <= destination) {
            //     if(currLift <= targetFloor && targetFloor <= destination) cost = 0;
            //     else if(curLift <= targetFloor) {
            //         // ไปบน 2 -> 5 กดชั้น 3 ไป 7 

            //         // ไปล่าง 2 -> 5 กดชั้น 3 ไป  1
            //     }
            // }

            if(cost < minCost) {
                minCost = cost;
                numBestElevator = i+1;
            }
        }
    }
}