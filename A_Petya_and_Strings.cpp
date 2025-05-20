#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

  
    int result = strcmp(s1.c_str(), s2.c_str());

    if (result < 0) cout << "-1";
    else if (result > 0) cout << "1";
    else cout << "0";

    return 0;
}
//  /\_/\  
// ( o.o ) 
//  > ^ <_M_FOR_MAHIR