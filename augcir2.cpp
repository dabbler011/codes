#include <bits.stdc++.h>
using namespace std;

int validate (string str[],int i,int j,int n,int m) {
	if (i<0||j<0||i>=n||i>=m) {
		return 0;
	}
	else if (str[i][j] == '*' || str[i][j] == 'V') {
		return 0;
	}
	else{
		return 1;
	}
}

int main () {
	int n,m;
	cin>>n>>m;
	string arr[m];
	int chck[n][m]={0};
	int i,j;
	for (i = 0;i < n;i++) {
		scanf ("%s",&arr[i]);
	}

}