#include<bits/stdc++.h>
using namespace std;

int currentQueue = 0;
int calledQueue = 0;
int orderCount = 0;
double orderTime = 0;
string prv = "-";

vector<pair<int,int>> q;

void resetQueue(int N) {
    currentQueue = N;
    calledQueue = N;
    q.clear();
}

void newQueue(int T) {
    cout << ">> ticket " << currentQueue << '\n';
    q.emplace_back(make_pair(currentQueue,T));
    currentQueue++;
}

void nextQueue() {
    cout << ">> call " << calledQueue << '\n';
    calledQueue++;
}

void order(int T) {
    cout << ">> qtime " << q[orderCount].first << ' ' << T - q[orderCount].second << '\n';
    orderTime += T - q[orderCount].second;
    orderCount++;
}

void avgQtime() {
    cout << ">> avg_qtime " <<  round((orderTime/orderCount)*100.0)/100.0 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    string str;
    cin.ignore();
    for(int i = 0; i < N; i++) {
        getline(cin, str);
        if(str != "next" && str != "avg_qtime") {
            string tmp = str.substr(0,str.find(' '));
            int qTime = stoi(str.substr(str.find(' ')));
            if(prv == "next" && tmp != "order") {
                q.erase(q.begin()+orderCount);
            }
            if(tmp == "reset") resetQueue(qTime);
            else if(tmp == "new") newQueue(qTime);
            else if(tmp == "order") order(qTime);
            prv = tmp;
        } else {
            if(prv == "next" && str != "order") {
                q.erase(q.begin()+orderCount);
            }
            if(str == "next") nextQueue();
            else avgQtime();
            prv = str;
        }
    }
}