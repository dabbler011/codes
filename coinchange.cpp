#include <bits/stdc++.h>
using namespace std;

int cchange (int n,int a[],int m,int dp[]) {
    if (n==0) {
        return 1;
    } else if (n<0) {
        return 0;
    } else {
        if (dp[n]==-1) {
            dp[n]=0;
        } else {
            return dp[n];
        }
        int i;
        for (i=0;i<m;i++) {
            dp[n]+=cchange(n-a[i],a,m,dp);
        }
        if (n==2) cout<<"AA"<<dp[n]<<endl;
        return dp[n];
    }
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        int m;
        cin>>m;
        int a[m],i;
        for (i=0;i<m;i++) {
            cin>>a[i];
        }
        int n;
        cin>>n;
        int dp[n+1];
        for(i=0;i<=n;i++) dp[i]=-1;
        cchange(n,a,m,dp);
        for(i=0;i<=n;i++) cout<<dp[i]<<" ";
        //cout<<dp[n]<<endl;
    }
    return 0;
}