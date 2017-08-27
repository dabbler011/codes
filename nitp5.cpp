#include <bits/stdc++.h>
using namespace std;

int msin () {
	long long int n,i;
	scanf ("%lld",&n);
	long long int a[n],ans = 0;
	for (i =0 ;i < n ; i++) {
		scanf("%lld",&a[i]);
	}
	sort(a,a+n);
	if (n%2==1){
		n=n/2+1;
	}
	else{
		n/=2;
	}
	for (i = 0; i < n;i++) {
		ans+=a[i];
	}
	printf("%lld",ans);
	return 0;
}