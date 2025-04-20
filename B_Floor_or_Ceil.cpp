#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
        ll t; 
        cin>>t;
        while(t--){
            ll x,n,m;
            cin>>x>>n>>m;
            ll mn=x>>min(n,60LL),mx=x;
            if(mn>0){
                mn=(mn+(1LL<<min(m,60LL))-1)>>min(m,60LL);
            }
            if(mx>0){
                mx=(mx+(1LL<<min(m,60LL))-1)>>min(m,60LL);
            }
            mx>>=min(n,60LL);
            ll mx2=max(mx,mn);
            ll mn2=min(mx,mn);
            cout<<mn2<<" "<<mx2<<endl;
        }
        
    return 0;
}