#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n, h, i, person, count = 0;
    cin >> n >> h;
    for (i = 0; i < n; i++)
    {
        cin >> person;
        if (person <= h)
        {
            count++;
        }

        else if (person > h)
        {
            count = count + 2;
        }
    }
    cout << count << endl;
    return 0;
}