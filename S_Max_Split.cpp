#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string s;
    cin >> s;
    int balance = 0;
    string temp = "";
    vector<string> result;

    for (char c : s)
    {
        temp += c;
        if (c == 'L')
            balance++;
        else
            balance--;
        if (balance == 0)
        {
            result.push_back(temp);
            temp = "";
        }
    }

    cout << result.size() << endl;
    for (const string &part : result)
    {
        cout << part << endl;
    }
    return 0;
}