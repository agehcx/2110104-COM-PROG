#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int l[2003], r[2003];

    int cnt = 0;

    while(true) {
        int lvalue, rvalue;
        cin >> lvalue;
        
        if( lvalue != -999 && lvalue != -998 ) {
            cin >> rvalue;

            l[cnt] = lvalue;
            r[cnt] = rvalue;

            cnt ++;
        }

        else {
            int redline[cnt], blueline[cnt]; 
            int minred = 2147483647, maxblue = -2147483647;

            if( lvalue == -999 ) {// Zag-Zig
                for(int i=0; i<cnt; i++) {
                    if( i%2==0 ) {
                        redline[i] = r[i];
                        blueline[i] = l[i];
                    }
                    else {
                        redline[i] = l[i];
                        blueline[i] = r[i];
                    }
                }

                for(int i=0; i<cnt; i++) {
                    minred = min(minred, redline[i]);
                    maxblue = max(maxblue, blueline[i]);
                }

                cout << minred << ' ' << maxblue;
                
                break;
            }

            else { // Zig-Zag
                for(int i=0; i<cnt; i++) {
                    if( i%2==0 ) {
                        redline[i] = l[i];
                        blueline[i] = r[i];
                    }
                    else {
                        redline[i] = r[i];
                        blueline[i] = l[i];
                    }
                }

                for(int i=0; i<cnt; i++) {
                    minred = min(minred, redline[i]);
                    maxblue = max(maxblue, blueline[i]);
                }

                cout << minred << ' ' << maxblue;
                
                break;
            }
        }
    }
}
