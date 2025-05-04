#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int freq[26] = {0};
    for(int i = 0; i < n; i++) {
        freq[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++) {
        while(freq[i] > 0) {
            cout << char(i + 'a');
            freq[i]--;
        }
    }

    cout << endl;
    return 0;
}