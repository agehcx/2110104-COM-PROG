#include <iostream> 
using namespace std; 

string hexList = "0123456789ABCDEF";

string dec2hex(int d) {
    if(d == 0) return "0";
    string ans = "", tmp = "";
    while(d > 0) {
        tmp += hexList[d%16];
        d = d/16;
    }
    for(int i = tmp.size() - 1; i >= 0; i--) ans += tmp[i];
    return ans;
} 

int main() { 
    int d; 
    while (cin >> d) { 
        cout << d << " -> " << dec2hex(d) << endl; 
    } 
    return 0; 
} 