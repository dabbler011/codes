#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin>>t;
	while(t--) {
		int n.ans = 0;
		cin>>n;
		if(n == 1) {
			ans = 1;
		} else {
			ans	= n * (n-1) / 2;
		}
		cout<<ans<<endl;
	}
	return 0;
}