#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int totalOnes = 0;
        for (int i = 0; i < n; ++i)
        {
            string ai = s;
            ai[i] = (ai[i] == '0') ? '1' : '0';
            for (char c : ai)
            {
                if (c == '1')
                    totalOnes++;
            }
        }

        cout << totalOnes << endl;
    }
    return 0;
}