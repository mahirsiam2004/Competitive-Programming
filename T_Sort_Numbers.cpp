#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int arr[3] = {a, b, c};

    sort(arr, arr + 3); 


    for (int i = 0; i < 3; ++i) {
        cout << arr[i] << endl;
    }

    cout << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}
//  /\_/\  
// ( o.o ) 
//  > ^ <_M_FOR_MAHIR