#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,i;
	cin>>n>>m;
	int a[m];
	for (i=0;i<m;i++) {
		cin>>a[i];
	}
	sort(a,a+m);
	int min=1000;
	for(i=0;i<m-n+1;i++) {
		if(a[i+n-1]-a[i]<min) min = a[i+n-1]-a[i];
	}
	cout<<min;
	return 0;
}