#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int t;
cin>>t;
while(t--){

    ll n;
    cin >> n;
    
    ll sum = 0, l = 0, r = 0;
    
    while (sum < n) {
        r++;
        sum += r;
    }
    
    while (sum > n) {
        sum -= l;
        l++;
    }
    
    cout << l << " " << r << endl;
    
}
return 0;
}
//  /\_/\  
// ( o.o ) 
//  > ^ <_M_FOR_MAHIR
