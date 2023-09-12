#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<string> vec;
    string str;
    unordered_map<string,int> mp;
    while(getline(cin, str)) {
        if(str == "q") break;
        string id = str.substr(0,str.find(' '));
        string grade = str.substr(str.find(' ')+1);
        // cout << id << 'x' << grade << '\n';
        vec.emplace_back(id);
        if(grade == "A") mp[id] = 8;
        else if(grade == "B+") mp[id] = 7;
        else if(grade == "B") mp[id] = 6;
        else if(grade == "C+") mp[id] = 5;
        else if(grade == "C") mp[id] = 4;
        else if(grade == "D+") mp[id] = 3;
        else if(grade == "D") mp[id] = 2;
        else if(grade == "F") mp[id] = 1;
    }
    long long id;
    while(cin >> id) {
        mp[to_string(id)]+=1;
    }
    for(auto & it : vec) {
        if(mp[it] >= 8) cout << it << ' ' << "A\n";
        else if(mp[it] == 7) cout << it << ' ' << "B+\n";
        else if(mp[it] == 6) cout << it << ' ' << "B\n";
        else if(mp[it] == 5) cout << it << ' ' << "C+\n";
        else if(mp[it] == 4) cout << it << ' ' << "C\n";
        else if(mp[it] == 3) cout << it << ' ' << "D+\n";
        else if(mp[it] == 2) cout << it << ' ' << "D\n";
        else if(mp[it] == 1) cout << it << ' ' << "F\n";
    }
}