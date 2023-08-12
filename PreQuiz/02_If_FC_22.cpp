#include <bits/stdc++.h>
using namespace std;

bool DBG = false;

bool checkLeapYear(int year) {
    bool check = false;

    if(year % 400 == 0) check = true;
    else if(year % 100 == 0) check = false;
    else if(year % 4 == 0) check = true;

    return check;
}

int calculateNthDay(int day, int month, bool leapyear) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int nthDay = day;
    
    for (int i = 1; i < month; ++i) {
        nthDay += daysInMonth[i];
    }
    
    if (leapyear && month > 2) {
        nthDay += 1;
    }
    
    return nthDay;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int d, m, y;
    cin >> d >> m >> y;

    int mm = m;
    int yy = y - 543;

    int dayCnt = calculateNthDay(d, m, checkLeapYear(yy));

    dayCnt += 15;

    if( dayCnt >= calculateNthDay(0, m+1, checkLeapYear(yy)) ) {
        mm += 1;
    }

    if( mm > 12) {
        mm %= 12;
    }

    if( dayCnt > (365 + checkLeapYear(yy))) {
        dayCnt %= (365 + checkLeapYear(yy));
        yy += 1;
    }

    dayCnt = dayCnt - calculateNthDay(0, mm, checkLeapYear(yy));

    cout << dayCnt << '/' << mm << '/' << yy + 543;

}