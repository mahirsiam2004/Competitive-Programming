#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    vector<int> moods(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> moods[i];
    }

    for (int k = 3; k <= n; ++k)
    { 
        if (n % k == 0)
        { 
            for (int start = 0; start < k; ++start)
            { 
                bool valid = true;
                for (int i = start; i < n; i += k)
                {
                    if (moods[i] != 1)
                    {
                        valid = false;
                        break;
                    }
                }
                if (valid)
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}