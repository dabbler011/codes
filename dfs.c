#include <stdio.h>

void dfs(int a[][n],int n){
	int i,b[n],st[n*n];
	for(i=0;i<n;i++)
		b[i]=0;
	int top = 0;
	st[0]=0;
	while (top >= 0) {
		int u=st[top];
		top--;
		if (b[u]==0) {
			printf("%d",u);
			b[u]=1;
		}
		for (i=0;i<n;i++) {
			if (a[u][i]==1&&b[i]==0){
				top++;
				st[top]=i;
			}

		}

	}
	
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n][n],i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=0;
	int k,m;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&j,&m);
		a[j][m]=1;
	}
	dfs(a,n);
	return 0;
}