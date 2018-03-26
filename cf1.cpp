#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int hh,mm,H,D,N,time;
	double no,tem1,temp,C;
	cin>>hh>>mm>>H>>D>>C>>N;
	time=20-hh-1;
	time*=60;
	time+=60-mm;
	no=H/N;
	if(H%N!=0) no++;
	temp = (double)no*C;
	if(time>0) {
		C=(double)C;
		C*=0.8;
		H+=D*time;
		no = H/N;
		if(H%N != 0) no++;
		tem1 = (double)no*C;
		if(tem1<temp) {
			cout<<tem1;
		} else {
			cout<<temp;
		}
	} else {
		cout<<temp*0.8;
	}
	return 0;
}