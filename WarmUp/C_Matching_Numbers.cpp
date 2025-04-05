#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      if(n % 2 == 1) {
          cout<<"Yes"<<endl;
          ll a = ceil(((double)n)/2);
          for(int i = 1; i < a+1; i++){
            cout<<(i+i-1)<<" "<<n-i+1+n<<endl;
          }
  
          for(int i = 1; i < a; i++){
            cout<<i+i<<" "<<n-a-i+1+n<<endl;
          }
      }
      else{
        cout<<"No"<<endl;
      }
    }
    return 0;
}