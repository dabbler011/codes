#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[1000001]={0},b[1000001]={0};
	long int i,j;
	a[0]=1;
	a[1]=1;
	b[0]=0;
	b[1]=0;
	for (i=2;i*i<1000001;i++) {
		if (a[i]==0) {
			j=i;
			while(j*i<1000001){
				a[j*i]=1;
				j++;
			}
		}
	}
	for(i=2;i<1000001;i++) {
		b[i]+=b[i-1];
		if(a[i]==0){
			b[i]++;
		}
	}
	long int q,l,r,ans;
	scanf("%ld",&q);
	while(q--) {
		ans=0;
		scanf("%ld",&l,&r);
		if(r<l){
			r+=l;
			l=r-l;
			r=r-l;
		}
		ans=b[r]-b[l-1];
		printf("%ld\n",ans);
	}
	return 0;
}