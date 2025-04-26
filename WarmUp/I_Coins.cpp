#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    vector<int> weight(3, 0); 
    for (int i = 0; i < 3; i++) {
        string s;
        cin >> s;
        if (s[1] == '>') {
            weight[s[0] - 'A']++;
        } else {
            weight[s[2] - 'A']++;
        }
    }
    if ((weight[0] == weight[1]) || (weight[1] == weight[2]) || (weight[0] == weight[2])) {
        cout << "Impossible" << endl;
        return 0;
    }

    vector<pair<int, char>> coins;
    coins.push_back({weight[0], 'A'});
    coins.push_back({weight[1], 'B'});
    coins.push_back({weight[2], 'C'});

    sort(coins.begin(), coins.end());

    for (auto c : coins) {
        cout << c.second;
    }
    cout << endl;
    return 0;
}
//  /\_/\  
// ( o.o ) 
//  > ^ <_M_FOR_MAHIR