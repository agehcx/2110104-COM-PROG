#include <bits/stdc++.h>
using namespace std;

bool DBG = 0;
#define ld long double

int calculateNthDay(int day, int month, int year, bool leapyear) {
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int nthDay = 0;
    
    for (int i = 1; i < month; ++i) {
        nthDay += daysInMonth[i];
    }
    
    nthDay += day;
    
    if (leapyear && month > 2) {
        nthDay += 1;
    }
    
    return nthDay;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const double PI = atan(1) * 4;

    int d, m, y, nd, nm, ny;

    cin >> d >> m >> y;
    cin >> nd >> nm >> ny;

    y = y - 543;
    ny = ny - 543;

    bool stleap = false;
    bool nwleap = false;

    if(y % 400 == 0) stleap = true;
    else if(y % 100 == 0) stleap = false;
    else if(y % 4 == 0) stleap = true;

    if(ny % 400 == 0) nwleap = true;
    else if(ny % 100 == 0) nwleap = false;
    else if(ny % 4 == 0) nwleap = true;

    int yeardiff = ny - y - 1;
    int dayscnt = yeardiff * 365;

    int daytoend = (365 + stleap + 1) - calculateNthDay(d, m, y, stleap);
    int daytostart = calculateNthDay(nd, nm, ny, nwleap) - 1;

    int totaldays = daytoend + dayscnt + daytostart;

    if(DBG) cout << daytoend << ' ' << dayscnt << ' ' << daytostart << ' ' << totaldays;

    ld physical = sin((2.0*PI*(ld)(totaldays))/23);
    ld emotional = sin((2.0*PI*(ld)(totaldays))/28);
    ld intellectual = sin((2.0*PI*(ld)(totaldays))/33);

    cout << totaldays << ' ' << round(physical*100.0) / 100.0 << ' ' << round(emotional*100.0) / 100.0 << ' ' << round(intellectual*100.0) / 100.0;
}