#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, k;
    cin >> n >> k;
    int scores[n];
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    int cutoff = scores[k - 1];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= cutoff && scores[i] > 0) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}