#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <bits/stdc++.h>

using namespace std;

map<char,string> t2k_map;
map<string, char> k2t_map;

void build_map() {
    int num = 2;
    string key;
    for (char c ='a';c <= 'z';c++) {
        key += to_string(num);
        t2k_map[c] = key;
        k2t_map[key] = c;
        if ( (key.length() == 3 && num != 7 && num != 9) || key.length() == 4) {
        key = "";
        num++;
        }
    }
    t2k_map[' '] = "0";
    k2t_map["0"] = ' ';
}

void convert_text_to_key(string text) {
    for (char c : text) {
        c = tolower(c);
        auto it = t2k_map.find(c);
        if (it != t2k_map.end()) {
        cout << it->second << ' ';
        }
    }
    cout << '\n';
}


void convert_key_to_text(string str) {
    string tmp;
    istringstream iss(str);
    while(iss >> tmp) {
        cout << k2t_map.find(tmp)->second;
    }
    cout << '\n';
}

int main() {
  build_map();
  string line;
  while (getline(cin,line)) {
    string mode = line.substr(0,3);
    string input= line.substr(4);
    if (mode == "T2K") {
        cout << ">> ";
        convert_text_to_key(input);
    } else {
        cout << ">> ";
        convert_key_to_text(input);
    }
  }
}