#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    
    vector<int> d(n - 1);
    for (int i = 0; i < n - 1; i++) {
        cin >> d[i];
    }
    
    int a, b;
    cin >> a >> b;
    
    int total_years = 0;
    for (int i = a - 1; i < b - 1; i++) {
        total_years += d[i];
    }
    
    cout << total_years << "\n";
    return 0;
}