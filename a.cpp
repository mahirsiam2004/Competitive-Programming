#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
float p=2*acos(0.0);
for(int i=1;i<=n;i++){
	float r;
	cin>>r;
	double ans=p*(r*r);
	cout<<"Case "<<i<<":"<<(2*r)*(2*r)-ans<<endl;
}
return 0;
}