#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int a, b, years = 0;
    cin >> a >> b;
    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }
    cout << years << endl;
    return 0;
}