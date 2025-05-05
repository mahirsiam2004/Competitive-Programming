#include<bits/stdc++.h>
using namespace std;
#define ll long long

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> u = a;
        sort(u.begin(), u.end());
        bool found = false;
        for (int i = 0; i < u.size(); ++i) {
            int v = u[i];
            int cntB = 0, cntC = 0;
            for (int j = 0; j < n; ++j) {
                if (a[j] == v) cntB++;
                else cntC++;
            }

            if (cntB > 0 && cntC > 0) {
                int g = 0;
                for (int j = 0; j < n; ++j) {
                    if (a[j] != v) {
                        if (g == 0) g = a[j];
                        else g = gcd(g, a[j]);
                    }
                }

                if (g != v) {
                    cout << "Yes"<<endl;
                    for (int j = 0; j < n; ++j) {
                        if (a[j] == v) cout << 1 << " ";
                        else cout << 2 << " ";
                    }
                    cout << "\n";
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            cout << "No"<<endl;
        }
    }

    return 0;
}
