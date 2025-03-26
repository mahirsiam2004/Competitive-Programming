#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t, value;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> value;
        cout << (value - 1) / 2 << endl;
    }
    return 0;
}