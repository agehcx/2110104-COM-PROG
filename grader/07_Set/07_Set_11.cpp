#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    string a, b;
    for(auto c : str1) if(c!=' ') a+=char(tolower(c));
    for(auto c : str2) if(c!=' ') b+=char(tolower(c));
    multiset<char> s1;
    sort(b.begin(),b.end());
    for(auto c : a) s1.insert(c);
    for(auto& c : b) {
        if(s1.count(c) == 0 || a.size() != b.size()) {
            cout << "NO";
            return 0;
        } else {
            auto it = s1.find(c);
            if(it!=s1.end()) s1.erase(it);
            else {
                cout << "NO";
                return 0;
            }
        }
    }  
    cout << "YES";
}