#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

bool isBigPrime(const string &s) {
    long long MAX = 1000000;
    for (long long i = 2; i < MAX; ++i) {
        long long rem = 0;
        for (char c : s) {
            rem = (rem * 10 + (c - '0')) % i;
        }
        if (rem == 0) return false;
    }
    return true; 
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string x;
        int k;
        cin >> x >> k;

        string y = "";
        for (int i = 0; i < k; ++i)
            y += x;

        if (y.size() <= 18) {
            long long num = stoll(y);
            cout << (isPrime(num) ? "YES\n" : "NO\n");
        } else {
            cout << (isBigPrime(y) ? "YES\n" : "NO\n");
        }
    }
    return 0;
}
