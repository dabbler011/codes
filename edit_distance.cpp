#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin>>t;
	while (t--) {
		int a,b,i,j;
		cin>>a>>b;
		int mat[a+1][b+1];
		string s1,s2;
		cin>>s1>>s2;
		for (i=0;i<=a;i++) {
			for (j=0;j<=b;j++) {
				if (i==0) {
					mat[i][j]=j;
				} else if (j==0) {
					mat[i][j]=i;
				} else if (s1[i-1]==s2[j-1]) {
					mat[i][j]=mat[i-1][j-1];
				} else {
					mat[i][j]=1+min(min(mat[i-1][j-1],mat[i][j-1]),mat[i-1][j]);
				}
			}
		}
		cout<<mat[a][b]<<endl;
	}
	return 0;
}