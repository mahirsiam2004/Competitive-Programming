#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll tt;
    cin >> tt;
 
    while (tt--)
    {
        ll n, m, k;
        cin >> n;
 
        vector<ll> v(n);
 
        string s;
        cin >> s;
 
        int sz = s.size();
 
        int l = 1;
        int r = n;
 
        for(int i=n-2;i>=0;i--)
        {
            
                if (s[i] == '<')
                {
                    v[i+1] = l;
                    l++;
                }
                else
                {
                    v[i+1] = r;
                    r--;
                }
            
        }
        v[0] = l;
 
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout<<endl;
        v.clear();
    }
    return 0;
}