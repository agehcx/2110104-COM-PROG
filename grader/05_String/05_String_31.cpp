#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string msg, str;
    getline(cin, msg);
    for(int i = 0; i < 8; i++) msg+=msg;
    while(getline(cin, str)) {
        char typ = str[0];
        string tmp, strip = "", enstr = "";
        int cnt = 0;
        for(int i = 1; i < str.size(); i++) if(str[i] != ' ') enstr += str[i];
        for(int i = 1; i < str.size(); i++) if(isalpha(str[i])) strip += str[i];
        string encryptList[12][2] = {{"UUUU", "0"}, {"UUUL", "1"}, {"UULU", "2"}, {"UULL", "3"}, {"ULUU", "4"}, {"ULUL", "5"}, {"ULLU", "6"}, {"ULLL", "7"}, {"LUUU", "8"}, {"LUUL", "9"}, {"LULU", "-"}, {"LULL", ","}};
        if(typ == 'E') {
            for(int i = 0; i < enstr.size(); i++) {
                for(int j = 0; j < 12; j++) {
                    string entmp = ""; entmp += enstr[i];
                    if(entmp == encryptList[j][1]) {
                        tmp = encryptList[j][0];
                    }
                }
                for(int j = 0; j < tmp.size(); j++) {
                    while(!isalpha(msg[cnt])) cout<<msg[cnt++];
                    if(tmp[j] == 'U') cout << char(toupper(msg[cnt]));
                    else cout << char(tolower(msg[cnt]));
                    cnt++;
                }
            }
        } else {
            string tmp = "";
            for(int i = 0; i < strip.size(); i++) {
                cnt++;
                tmp += (isupper(strip[i])?'U':'L');
                if(cnt%4==0) {
                    cnt = 0;
                    for(int j = 0; j < 12; j++) {
                        if(tmp == encryptList[j][0]) {
                            cout << encryptList[j][1];
                        }
                    }
                    tmp = "";
                }
            }
        }
        cout << '\n';
    }
}