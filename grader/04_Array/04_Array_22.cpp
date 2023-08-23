#include<bits/stdc++.h>
using namespace std;

void Cut(string *arr, int N) {
    string tmp[N];
    for(int i = N/2; i < N; i++) tmp[i - (N/2)] = arr[i];
    for(int i = 0; i < N/2; i++) tmp[N/2 + i] = arr[i];
    for(int i = 0; i < N; i++) arr[i] = tmp[i];
}

void Shuffle(string *arr, int N) {
    string tmp[N];
    for(int i = 0; i < N; i++) {
        if(i < N/2) tmp[i*2] = arr[i];
        else tmp[(i-(N/2))*2+1] = arr[i]; 
    }
    for(int i = 0; i < N; i++) arr[i] = tmp[i];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; cin >> N;
    string arr[N];
    for(int i = 0; i < N; i++) cin >> arr[i];
    cin.ignore();
    string order = "";
    string SEQ, dummy;
    getline(std::cin, SEQ);
    for(auto& e : SEQ) if(e == 'C' || e == 'S') {order += e;}
    for(char c : order) {
        if(c == 'C') Cut(arr, N);
        else if(c == 'S') Shuffle(arr, N);
    }

    for(int i = 0; i < N; i++) {
        cout << arr[i] << ' ';
    }
}