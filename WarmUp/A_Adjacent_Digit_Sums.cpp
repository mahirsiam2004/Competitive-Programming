// unsolved
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        for (int n = 1; n <= 1000000; n++) {
            int sum1 = 0, sum2 = 0, temp = n;
            while (temp > 0) {
                sum1 += temp % 10;
                temp /= 10;
            }
            temp = n + 1;
            while (temp > 0) {
                sum2 += temp % 10;
                temp /= 10;
            }
            
            if (sum1 == x && sum2 == y) {
                cout << "Yes\n";
                break;
            }
            
            if (n == 1000000) {
                cout << "No\n";
            }
        }
    }
    return 0;
}