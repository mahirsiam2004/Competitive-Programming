#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
        if (k < -n * p || k > n * p) {
            cout << -1 <<endl;
            continue;
        }
        int min_ops = abs(k) / p;
        if (abs(k) % p != 0) {
            min_ops++;
        }
        cout << min_ops <<endl;
    }
    return 0;
}