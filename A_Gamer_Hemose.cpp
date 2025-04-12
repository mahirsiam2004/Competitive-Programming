#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    int n, h;
    while (t--)
    {
        cin >> n >> h;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        int w1 = arr[0] + arr[1];
        int move = 0;
        if (h % w1 == 0)
        {
            cout << (h / w1 * 2) << endl;
            continue;
        }
        if (h % w1 > arr[0])
        {
            cout << (h / w1 * 2 + 2) << endl;
            continue;
        }
        if (h % w1 > 0)
        {
            cout << (h / w1 * 2 + 1) << endl;
            continue;
        }
    }
    return 0;
}