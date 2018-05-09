#include <bits/stdc++.h>
using namespace std;

int main () {
	int n,i;
	cin>>n;
	if (n<6) cout<<-1<<endl;
	else if (n==6) {
		cout<<"1 2\n1 3\n1 4\n2 5\n2 6\n";
	}
	else if (n==7) {
		cout<<"1 2\n1 3\n1 4\n2 5\n2 6\n2 7\n";
	}
	else {
		cout<<"1 2\n1 3\n2 4\n2 5\n3 6\n4 7\n4 8\n";
		for (i=9;i<=n;i++) {
			cout<<4<<" "<<i<<endl;
		}
	}
	for (i=2;i<=n;i++) {
			cout<<1<<" "<<i<<endl;
	}
	return 0;
}