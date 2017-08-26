#include <stdio.h>

int issafe(int pos[],int prsnt){
	int i;
	i=prsnt-1;
	for(;i>=0;i--){
		if(pos[prsnt]==pos[i]||pos[prsnt]-pos[i]==prsnt-i||pos[prsnt]-pos[i]==i-prsnt)
			return 0;
	}
	return 1;
}

int count(int pos[],int n,int prsnt,int ans){
	if(prsnt==-1)
		return ans;
	pos[prsnt]++;
	if(pos[prsnt]==n){
		pos[prsnt]=-1;
		prsnt--;
		ans=count(pos,n,prsnt,ans);
	}
	else{
		if(issafe(pos,prsnt)){
			if(prsnt==n-1){
				ans++;
				ans=count(pos,n,prsnt,ans);
			}
			else{
				prsnt++;
				ans=count(pos,n,prsnt,ans);
			}
		}
		else{
			ans=count(pos,n,prsnt,ans);
		}
	}
	return ans;
}

int main(){
	int n;
	scanf("%d",&n);
	int i,pos[n];
	for(i=0;i<n;i++){
		pos[i]=-1;
	}
	int ans=count(pos,n,0,0);
	printf("%d",ans);	
	return 0;
}
