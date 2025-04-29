#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int maxPleasure = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int g = gcd(a[i], a[j]);
                if (g > maxPleasure) {
                    maxPleasure = g;
                }
            }
        }

        cout << maxPleasure << "\n";
    }
    return 0;
}