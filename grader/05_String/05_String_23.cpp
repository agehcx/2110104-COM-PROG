#include<bits/stdc++.h>
using namespace std;

bool isNumeric(char x) {
    return ( x >= '0' && x <= '9');
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string plate; getline(cin, plate);
    int shiftCnt; cin >> shiftCnt;

    int leadingNumber = plate[0] - '0', plateNumber = stoi(plate.substr(4));
    char firstChar = plate[1], secondChar = plate[2];

    if(secondChar + (shiftCnt+plateNumber)/1000 <= 'Z' ) {
        secondChar += (shiftCnt+plateNumber)/1000;
        plateNumber = (shiftCnt+plateNumber)%1000;
    } else {
        if(firstChar + (secondChar-65+(shiftCnt+plateNumber)/1000)/26 <= 'Z' ) {
            firstChar += (secondChar-65+(shiftCnt+plateNumber)/1000)/26;
            secondChar = (secondChar-65+(shiftCnt+plateNumber)/1000)%26 + 65;
            plateNumber = (shiftCnt+plateNumber)%1000;
        } else {
            leadingNumber += (firstChar-65+(secondChar-65+(shiftCnt+plateNumber)/1000)/26)/26;
            firstChar = (firstChar-65+(secondChar-65+(shiftCnt+plateNumber)/1000)/26)%26 + 65;
            secondChar = (secondChar-65+(shiftCnt+plateNumber)/1000)%26 + 65;
            plateNumber = (shiftCnt+plateNumber)%1000;
        }
    }

    cout << leadingNumber << firstChar << secondChar << '-';

    if(plateNumber > 99) cout << plateNumber;
    else if(plateNumber > 9) cout << 0 << plateNumber;
    else cout << "00" << plateNumber;
}