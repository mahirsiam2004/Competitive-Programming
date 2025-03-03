#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    int v=0;
    while(t--){
        string s;
        cin>>s;
        if(s.front()=='+'){
            v++;
        }
        else if(s.back()=='+'){
            v++;
        }
        else{
            v--;
        }
    }
    cout<<v;
    return 0;
}