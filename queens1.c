#include <stdio.h>

int issafe(int pos[],int k){
	int i;
	for(i=0;i<k;i++){
		if(pos[k]-pos[i]==k-i||pos[k]==pos[i]||pos[k]-pos[i]==i-k)
			return 0;
	}
	return 1;
}

int main(){
	int n;
	scanf("%d",&n);
	int i,pos[n],count=0;
	for(i=0;i<n;i++){
		pos[i]=-1;
	}
	i=0;
	int col=0;
	//while(pos[0]!=n-1){
	for(;i>=0;){
		if(pos[i]==n-1){
			pos[i]=-1;
			i--;
			continue;
		}
		pos[i]++;
		if(issafe(pos,i)){
			if(i<n-1)
				i++;
			else{
				count++;
				continue;
			}
		}
	}
	printf("%d",count);
	//}
	return 0;
}

