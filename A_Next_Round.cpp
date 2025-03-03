#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,k;
    cin>>n>>k;
    int ar[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    for(int i=0;i<n;i++){
        if(ar[i]>=ar[k-1] && ar[i]!=0){ 
            cnt++;
        }
    }
    cout<<cnt;
    
    return 0;
}
