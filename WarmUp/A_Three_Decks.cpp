#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
        int t;
    cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) % 3 == 0 && a + c >= 2 * b)
            cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
    return 0;
}