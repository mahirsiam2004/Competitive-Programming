#include <iostream>
#include <vector>

using namespace std;

vector<int> constructPermutation(int n, int x) {
    vector<int> p;
    if (x == 0) {
        for (int i = n - 1; i >= 0; --i) {
            p.push_back(i);
        }
    } else if (x == n) {
        for (int i = 0; i < n; ++i) {
            p.push_back(i);
        }
    } else {
        p.push_back(x);
        for (int i = 0; i < n; ++i) {
            if (i != x) {
                p.push_back(i);
            }
        }
    }
    return p;
}g

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> p = constructPermutation(n, x);
        for (int num : p) {
            cout << num << ' ';
        }
        cout << '\n';
    }

    return 0;
}