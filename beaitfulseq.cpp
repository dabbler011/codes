#include <bits/stdc++.h>
using namespace std;

int dp[100000];

int compute (long int a[],int n,int i,long int max,int changed) {
    if(i==n) return 0;
    if (changed==0) {
        if (a[i]>max) {
            max=a[i];
            if (dp[i]!=-1) {
                return dp[i]; 
            }
            int aa=compute(a,n,i+1,max,0);
            int b=compute(a,n,i+1,max,1);
            if (aa==-1) dp[i]=b;
            if(b==-1) dp[i]=aa;
            dp[i]= min(aa,b);
            return dp[i];
        }
        return -2;
    }
    if (a[i]==max+1) return -1;
    int aa=compute(a,n,i+1,max+1,0);
    int b=compute(a,n,i+1,max+1,1);
    if (aa==-1) return 1+b;
    if(b==-1) return 1+aa;
    return min(1+aa,1+b);
}

int main () {
    int t,i;
    for (i=0;i<100000;i++) dp[i]=-1;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        long int a[n];
        for(i=0;i<n;i++) {
            cin>>a[i];
        }
        cout<<compute(a,n,0,-1,0)<<compute(a,n,0,-1,1)<<endl;
    }
    return 0;
}