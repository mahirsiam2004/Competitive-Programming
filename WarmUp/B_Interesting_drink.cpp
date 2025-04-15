#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int m;
    cin >> m;
    sort(arr, arr + n);
    while (m--)
    {
        int t;
        cin >> t;
        int a;
        a = upper_bound(arr, arr + n, t) - arr;
        cout << a << endl;
    }
    return 0;
}