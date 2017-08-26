#include<iostream>
using namespace std;
int a[1000000001];
int main(){
a[1]=1;
long long int j,i,k,n,m;
for(i=2;i<=1000000000;i++){
if(a[i]!=1){
k=2;
for(j=i*k;j<=1000000000;j=i*k){
a[j]=1;
k++;
}
}
}
int t;
cin>>t;
while(t--){
cin>>n>>m;
while(n<=m){
if(a[n]==0)
cout<<a[n]<<endl;
n++;
}
cout<<endl;
}
return 0;
}
