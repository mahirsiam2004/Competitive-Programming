#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> p(n);

        if (x == 0)
        {
            for (int i = 1; i < n; i++)
                p[i - 1] = i;
            p[n - 1] = 0;
        }
        else if (x == n)
        {
            for (int i = 0; i < n; i++)
                p[i] = i;
        }
        else
        {
            int i = 0;
            for (; i < x; i++)
                p[i] = i;
            for (int j = x + 1; j < n; j++, i++)
                p[i] = j;
            p[i] = x;
        }

        for (int i = 0; i < n; i++)
        {
            cout << p[i] << (i + 1 == n ? '\n' : ' ');
        }
    }

    return 0;
}
//  /\_/\  
// ( o.o ) 
//  > ^ <_M_FOR_MAHIR