#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int total_cost = k * w * (w + 1) / 2;
    cout << (total_cost > n ? total_cost - n : 0) << endl;
    return 0;
}
//  /\_/\  
// ( o.o ) 
//  > ^ <_M_FOR_MAHIR
