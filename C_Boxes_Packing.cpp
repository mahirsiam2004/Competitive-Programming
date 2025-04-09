#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n;
  cin>>n;
  unordered_map<ll, ll> mp;
  ll x;
  ll ans = -1;
  while(n--){
    cin>>x;
    mp[x]++;
    ans = max(ans, mp[x]);
  }
  cout<<ans<<endl;
return 0;
}