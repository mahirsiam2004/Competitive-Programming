#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
while(t--){
    ll a,b,c;
cin>>a>>b>>c;
int friday=c/7;
cout<<(c-friday)*a*b<<endl;
}
    return 0;
}