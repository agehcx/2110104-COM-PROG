#include<bits/stdc++.h>
using namespace std;

string addNum(string a, string b) {
    int carry = 0;
    string res = "";
    int i = a.length() - 1;
    int j = b.length() - 1;
    while(i >= 0 || j >= 0 || carry > 0) {
        int digA = (i>=0?a[i]-'0':0);
        int digB = (j>=0?b[j]-'0':0);
        int sum = digA + digB + carry;
        carry = sum / 10;
        sum %= 10;

        res = to_string(sum) + res;
        i--, j--;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str, ans = "";
    while(getline(cin, str)) {
        if(str == "END") break;
        ans = addNum(ans, str);
    }
    cout << ans;
}