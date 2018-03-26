#include<bits/stdc++.h>
using namespace std;

int bin_search(long long int a[],int begin,int end,long long int m) {
	int mid = (begin+end)/2;
	if (m >= a[mid] && m < a[mid+1])
		return mid;
	else if (m > a[mid])
		return bin_search(a,mid+1,end,m);
	else
		return bin_search(a,begin,mid-1,m);
}

int main () {
	int n;
	cin>>n;
	int a[n],b[n],i;
	cin>>a[0];
	b[0] = a[0];
	for (i = 0;i < n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for (i = 0;i < n;i++){
		b[i] = b[i-1]+a[i];
	}
	int q;
	cin>>q;
	while (q--) {
		int m;
		cin>>m;
		if (m>=a[n-1]) {
			cout<<n<<" "<<b[n-1]<<endl;
		} else {
			int no = bin_search(a,0,n-1,m);
			cout<<no+1<<" "<<b[no]<<endl;
		}
	}

	return 0;
}