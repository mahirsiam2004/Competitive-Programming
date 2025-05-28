#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> buy(n), sell(n);
    for (int i = 0; i < n; i++) cin >> buy[i];
    for (int i = 0; i < n; i++) cin >> sell[i];

    vector<ll> profit(n);
    for (int i = 0; i < n; i++) {
        profit[i] = sell[i] - buy[i];
    }


    sort(profit.begin(), profit.end(), greater<ll>());


    ll totalProfit = 0;
    for (int i = 0; i < k; i++) {
        totalProfit += profit[i];
    }

    cout << totalProfit << endl;
    return 0;
}
