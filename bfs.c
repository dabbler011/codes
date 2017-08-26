#include <stdio.h>

void bfs(int n,int a[][n]){
	int b[n],q[n*n],front=0,last=0,i;
	for(i=0;i<n;i++){
		b[i]=0;
	}
	q[0]=0;
	b[0]=1;
	while(front<=last){
		int u=q[front];
		front++;
		printf("%d ",u);
		if(b[u]<2){
			for(i=0;i<n;i++){
				if(a[u][i]==1&&b[i]<1){
					b[i]++;
					q[++last]=i;
				}
			}
			b[u]=2;
		}
	}
}

int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n][n],i,j,m;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			a[i][j]=0;
	}
	for(i=0;i<k;i++){
		scanf("%d%d",&j,&m);
		a[j][m]=1;
	}
	bfs(n,a);
	return 0;
}