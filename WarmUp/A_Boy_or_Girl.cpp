// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     cin >> s;
    
//     set<char> distinct_letters;
//     for (char c : s) {
//         distinct_letters.insert(c);
//     }
    
//     if (distinct_letters.size() % 2 == 0) {
//         cout << "CHAT WITH HER!" << endl;
//     } else {
//         cout << "IGNORE HIM!" << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);

    int count = 0;

    for (char c : s) {
        if (freq[c - 'a'] == 0) {
            count++;
            freq[c - 'a'] = 1;
        }
    }

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
