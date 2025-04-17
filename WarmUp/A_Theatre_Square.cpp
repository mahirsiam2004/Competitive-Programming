#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n, m, a;
    cin>>n>>m>>a;
    ll c = (m % a == 0) ? (m / a) : (m / a + 1);
    ll d = (n % a == 0) ? (n / a) : (n / a + 1);
    cout<<(c * d)<<endl;
  
    return 0;
}