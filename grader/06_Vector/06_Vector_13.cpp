#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string line, char delimiter) {
    vector<string> vec;
    line += delimiter;
    string tmp = "";
    for(char c : line) {
        if(c == delimiter) {
            if(tmp != "") vec.emplace_back(tmp);
            tmp = "";
        } else {
            tmp += c;
        }
    }
    return vec;
}

int main() {
    string line;
    getline(cin, line);
    string delim;
    getline(cin, delim);
    for (string e : split(line, delim[0])) {
        cout << '(' << e << ')';
    }
}
