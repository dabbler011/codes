#include <stdio.h>
#include <limits.h>

void dij (int n, int a[][n], int x) {
	int i, j;
	int b[n];
	for(i = 0;i < n;i++) {
		b[i] = INT_MAX;
	}
	b[x] = 0;
	for (i = 0;i < n;i++){
		if (a[x][i] != 0) {
			if (b[i] < b[x] + a[x][i]) {
				
			}
		}
	}
}

int main() {
	int n;
	scanf ("%d",&n);
	int k,a[n][n],i,j,n,w;
	scanf ("%d",&k);
	for (i = 0;i < n;i++) {
		for (i = 0;i < n;i++){
			a[i][j] = 0;
		}
	}
	for(i = 0;i < k;i++){
		scanf ("%d%d%d",&j,&n,&w);
		a[j][n] = w;
	}
	dij (n, a, 0);
	return 0;
}