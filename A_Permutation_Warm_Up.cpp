#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n; cin >> n;
        ll k = n / 2;
        ll d = k * (n-k) + 1;
        cout << d << endl;
    }
    return 0;
}
//  /\_/\  
// ( o.o ) 
//  > ^ <_M_FOR_MAHIR