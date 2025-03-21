#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int q;
    cin >> q;
    while (q--) {
        string s, t;
        cin >> s >> t;
        
        int common = 0;
        int minLen = min(s.length(), t.length());
        for (int i = 0; i < minLen; i++) {
            if (s[i] == t[i])
                common++;
            else
                break;
        }
        
        int result = (s.length() - common) + (t.length() - common) + 1;
        cout << result << "\n";
    }
    return 0;
}