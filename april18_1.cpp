#include <bits/stdc++.h>
using namespace std;

int main () {
	int n;
	cin>>n;
	int c[n],t[n],min1=100000,min2=100000,min3=100000,i;
	for (i=0;i<n;i++) {
		cin>>c[i];
	}
	for (i=0;i<n;i++) {
		cin>>t[i];
		if (t[i]==1 && c[i]<min1) min1=c[i]; 
		else if (t[i]==2 && c[i]<min2) min2=c[i]; 
		else if (t[i]==3 && c[i]<min3) min3=c[i]; 
	}
	cout<<min(min1+min2,min3);
	return 0;
}