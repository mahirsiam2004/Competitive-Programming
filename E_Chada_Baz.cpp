#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll jerry=0,tom=0;
    for(int i=0;i<n;i++){
         cin >> v[i];
    }
        for(int i=1;i<n;i=i+2){
            jerry=jerry+v[i];
    }
        for(int i=0;i<n;i=i+2){
            tom=tom+v[i];
    }
    // cout<<jerry<<" "<<tom<<endl;
    if(tom>jerry)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}