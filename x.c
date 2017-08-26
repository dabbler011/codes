#include <stdio.h>

int cal(int a[],int b[],int pos,int ans,int cnt,int sm,int n){
	if(cnt<4&&pos+1<n){
		b[pos]=1;
		ans=cal(a,b,pos+1,ans,cnt+1,sm+a[pos],n);
	}
	else if(cnt==4&&sm+a[pos]>=40){
		for(int i=0;i<pos;i++){
			if(b[i]==1){
				printf("%d ",i);
			}
		}
		printf("%d",pos);
		ans++;
		if(pos+1<n){
			ans=cal(a,b,pos+1,ans,cnt,sm,n);
		}
	}
	else if(pos+1==n){
		while(pos--){
			if(b[pos]==1){
				b[pos]=0;
				break;
			}
		}
		ans=cal(a,b,pos+1,ans,cnt-1,sm-a[pos],n);
	}
	return ans;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int k,n,i;
		scanf("%d%d",&n,&k);
		int a[n],b[n];
		for(i=0;i<n;i++)
			b[i]=0;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		int ans=0,cnt=0;
		int pos=0,sm=0;
		ans=cal(a,b,pos,ans,cnt,sm,n);
		printf("%d\n",ans);

	}
	return 0;
}