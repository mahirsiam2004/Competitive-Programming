#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    string A;
    cin >> n >> A;
    
    string result(2 * n, ' ');
    int h_count = 0, m_count = 0;
    
    for (int i = 0; i < 2 * n; i++) {
        if (h_count < n && (m_count == n || A[i] >= A[i + 1])) {
            result[i] = 'H';
            h_count++;
        } else {
            result[i] = 'M';
            m_count++;
        }
    }
    
    cout << result << endl;
    return 0;
}