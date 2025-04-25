#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s;
    cin >> s;
    int n = s.size();
    bool is_palindrome = true;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            is_palindrome = false;
            break;
        }
    }
    if (!is_palindrome)
        cout << n << endl;
    else {
        bool all_same = true;
        for (int i = 1; i < n; i++) {
            if (s[i] != s[0]) {
                all_same = false;
                break;
            }
        }
        if (all_same)
            cout << 0 << endl;
        else
            cout << n - 1 << endl;
    }
    return 0;
}