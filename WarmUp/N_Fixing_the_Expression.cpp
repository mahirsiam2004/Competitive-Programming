#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        char a = s[0], op = s[1], b = s[2];
        
        if ((op == '<' && a < b) || (op == '=' && a == b) || (op == '>' && a > b)) {
            cout << s << "\n";
        } else {
            if (a < b) s[1] = '<';
            else if (a > b) s[1] = '>';
            else s[1] = '=';
            cout << s << "\n";
        }
    }
    return 0;
}