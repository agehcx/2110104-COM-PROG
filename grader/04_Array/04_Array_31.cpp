#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N; cin >> N;

    string M = to_string(N);

    string numpair[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string tenpair[8] = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string tenIshpair[9] = {"eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string notation[4] = {"thousand", "million", "billion", "trillion"};    

    if(N == 0) {
        cout << "zero";
        return 0;
    }

    int sz = int(ceil( (double) (M.size()) / 3.0));
    int parts[sz];
    
    for(int i = sz - 1; i >= 0; i--) {
        parts[i] = N % 1000;
        N = N / 1000;
    }

    for(int i = 0; i < sz; i++) {
        if(parts[i] == 0) continue;
        if(parts[i] > 99) {
            cout << numpair[parts[i]/100] << " hundred ";
            parts[i] %= 100;
        }
        if(parts[i] > 9) {
            if(parts[i] / 10 == 1) {
                cout << tenIshpair[parts[i]%10 - 1] << ' ';
                parts[i] = 0;
            } 
            else {
                cout << tenpair[parts[i]/10 - 2] << ' ';
            }
            parts[i] %= 10;
        }
        if(parts[i] > 0) {
            cout << numpair[parts[i%10]] << ' ';
        }

       if(i!=sz-1) cout << notation[sz - i - 2] << ' ';
    }
}