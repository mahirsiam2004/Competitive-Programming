#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin >> t;
    while (t--) {
        int n, m, l, r;
    cin >> n >> m >> l >> r;
    int a = -l, b = r;
    int x = m;
    if (x > a) x = a;
    cout << -x << " " << m - x << endl;
    }
    return 0;
}