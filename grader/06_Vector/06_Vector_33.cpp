#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<tuple<int,double,string>> party;

    string str;
    double totalVotes = 0;
    int totalSeats = 0;
    while(true) {
        getline(cin, str);
        if(str == "END") break;
        string partyName = str.substr(0,str.find(' '));
        int partyVotes = stoi(str.substr(str.find(' ')));
        totalVotes += partyVotes;
        party.emplace_back(make_tuple(0,partyVotes,partyName));
    } 

    double votePerSeat = totalVotes / 100.0;
    vector<pair<double,string>> remainderSeat;

    for(auto & it : party) {
        int & seatCount = get<0>(it);
        double& vote = get<1>(it);
        string& partyName = get<2>(it);
        double partySeat = vote / votePerSeat;
        double remainder = partySeat - int(partySeat);
        totalSeats += int(partySeat);
        seatCount += int(partySeat);
        remainderSeat.emplace_back(make_pair(remainder,partyName));  
    }
    sort(remainderSeat.begin(), remainderSeat.end(), greater<pair<double, string>>());
    for(auto & it : remainderSeat) {
        if(100 - totalSeats > 0) {
            for(auto & [seatCount, vote, partyName] : party) {
                if(it.second == partyName) {
                    seatCount++;
                    totalSeats++;
                }
            }
        }
    }
    sort(party.begin(),party.end(),greater<tuple<int,int,string>>());
    for(auto & it : party) {
        int & seatCount = get<0>(it);
        double& vote = get<1>(it);
        string& partyName = get<2>(it);
        if(seatCount) cout << fixed << partyName << ' ' << seatCount << ' ' << int(vote) << '\n';
    }
}