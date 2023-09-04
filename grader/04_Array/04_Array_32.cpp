#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    int arr[N][3];
    for (int i = 0; i < N; i++) {
        int liftnum; cin >> liftnum;
        arr[liftnum-1][0] = liftnum;
        for(int j = 1; j < 3; j++) {
            cin >> arr[liftnum-1][j];
        }
    }
    int Q; cin >> Q;
    while (Q--) {
        int numBestElevator = 0;
        int minCost = INT_MAX;

        int currFloor, targetFloor;
        cin >> currFloor >> targetFloor;

        for (int i = 0; i < N; i++) {
            int liftCost;
            int currLift = arr[i][1];
            int destination = arr[i][2];

            if ((currLift >= currFloor && currFloor >= targetFloor && targetFloor >= destination) ||
                (currLift <= currFloor && currFloor <= targetFloor && targetFloor <= destination)) {
                liftCost = 0;
            } else if ((currLift <= currFloor && currFloor <= destination) ||
                       (currLift >= currFloor && currFloor >= destination)) {
                liftCost = abs(destination - targetFloor);
            } else {
                liftCost = abs(destination - currFloor) + abs(currFloor - targetFloor);
            }

            if (liftCost < minCost) {
                minCost = liftCost;
                numBestElevator = arr[i][0];
            }
        }
        cout << ">> " << numBestElevator << '\n';
    }

    return 0;
}
