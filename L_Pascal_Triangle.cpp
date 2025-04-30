#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int N;
    cin >> N;

    int pascal[31][31]; 

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];

            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}