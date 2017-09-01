#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,i;
		scanf("%d",&n);
		long int a[n];
		for (i = 0;i < n;i++) {
			scanf("%ld",&a[i]);
		}
		long int ans = 1;
		i = n-2;
		while (i>=0) {
			if (a[i]>a[i+1]){
				ans++;
			}
			i--;
		}
		printf("%ld",ans);
	}
}