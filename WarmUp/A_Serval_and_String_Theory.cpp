#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        string rev_s = s;
        reverse(rev_s.begin(), rev_s.end());
        
        if (s < rev_s) {
            cout << "YES" << endl;
            continue;
        }
        
        if (k == 0) {
            cout << "NO" << endl;
            continue;
        }
        
        if (n == 1) {
            cout << "NO" << endl;
            continue;
        }
        
        cout << "YES" << endl;
    }
    return 0;
}
//  /\_/\  
// ( o.o ) 
//  > ^ <_M_FOR_MAHIR