#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
      stack<char> st;
      int count = 0;
      for(auto i : s){
        if(i == ')' && !st.empty()){
          st.pop();
          continue;
        }
        if(i == ')' && st.empty()){
          count++;
          continue;
        }
        st.push(i);
      }
      cout<<count<<endl;
    }
    return 0;
}