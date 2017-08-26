#include <bits/stdc++.h>
using namespace std;

int main() {
	long int n,chck = 0;
	scanf ("%ld",&n);
	long int i,a[n];
	long long int sum = 0,indx = -1;
	for (i=0;i<n;i++){
		scanf("%ld",&a[i]);
		sum+=a[i];
		if (sum%2==1){
			chck = 1;
			indx=i;
		}
	}
	if (chck==0){
		printf("Second");
	}
	else{
		printf("First");
	}
	return 0;
}