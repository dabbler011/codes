#include <bits/stdc++.h>
using namespace std;

int main(){
	double ax,ay,bx,by,cx,cy;
	cin>>ax>>ay>>bx>>by>>cx>>cy;
	if((ax-bx)*(ax-bx)+(ay-by)*(ay-by)==(bx-cx)*(bx-cx)+(by-cy)*(by-cy)){
		if((ax-bx)/(ay-by)!=(bx-cx)/(by-cy))
			cout<<"Yes";
		else{
			cout<<"No";
		}
	}
	else{
		cout<<"Noo";
	}
	return 0;
}