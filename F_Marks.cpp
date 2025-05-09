#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> gradebook(n);
    for (int i = 0; i < n; i++)
    {
        cin >> gradebook[i];
    }

    int successful_students = 0;

    for (int i = 0; i < n; i++)
    {
        bool is_successful = false;
        for (int j = 0; j < m; j++)
        {
            bool is_best_in_subject = true;
            for (int k = 0; k < n; k++)
            {
                if (gradebook[k][j] > gradebook[i][j])
                {
                    is_best_in_subject = false;
                    break;
                }
            }
            if (is_best_in_subject)
            {
                is_successful = true;
                break;
            }
        }
        if (is_successful)
        {
            successful_students++;
        }
    }

    cout << successful_students << endl;
    return 0;
}