#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    vector<int>freq{26,0};
    int count=0;
    for(int c:s){
        if(freq[c-'a'] == 0){
            count++;
        }
    }
    if((s.size()-count)%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }


    return 0;
}