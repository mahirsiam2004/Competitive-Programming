#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    int n = s.length();
    bool possible = true;

    for (int i = 0; i < n / 2; ++i) {
        int j = n - i - 1;
        if (s[i] == '?' && s[j] == '?') {
            s[i] = s[j] = 'a'; 
        } else if (s[i] == '?') {
            s[i] = s[j];
        } else if (s[j] == '?') {
            s[j] = s[i];
        } else if (s[i] != s[j]) {
            possible = false;
            break;
        }
    }

    if (n % 2 == 1 && s[n/2] == '?') {
        s[n/2] = 'a'; 
    }

    if (possible)
        cout << s << endl;
    else
        cout << -1 << endl;
    return 0;
}