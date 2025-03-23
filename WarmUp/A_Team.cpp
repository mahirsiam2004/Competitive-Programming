#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    int solvableProblems = 0;
    for (int i = 0; i < n; i++) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        if (p1 + p2 + p3 >= 2) {
            solvableProblems++;
        }
    }
    cout << solvableProblems << endl;
    return 0;
}