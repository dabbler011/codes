#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],min,i;
		cin>>a[0];
		min=0;
		for(i=1;i<n;i++){
			cin>>a[i];
			if(a[i]<a[min]){
				min=i;
			}
		}
		cout<<min+1<<endl;
	}
	return 0;
}