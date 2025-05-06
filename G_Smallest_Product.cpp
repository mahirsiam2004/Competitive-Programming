#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin >> n;
    
    vector<long long> A(n);
    long double log_product = 0.0;

    for (int i = 0; i < n; ++i) {
        cin >> A[i];
        log_product += logl(A[i]);
    }

    ll low = 1, high = 1e10;
    ll ans = -1;
    while (low <= high) {
        ll mid = (low + high) / 2;
        long double log_new_product = n * logl(mid);
        
        if (log_new_product > log_product) {
            ans = mid;
            high = mid - 1; 
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;
}