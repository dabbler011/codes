#include <bits/stdc++.h>
using namespace std;

int dp[10001][101];

int compute (int dist,int k) {
    if (dist < 0) return 0;
    if (dist == 0) return 1;
    if(dp[dist][k]!=-1) return dp[dist][k];
    int i,ans=0;
    for (i = 1;i <= k;i++) {
        ans+=compute(dist-i,k);
        ans%=1000000007;
    }
    return dp[dist][k]=ans;
}

int main () {
    memset(dp,-1,sizeof(dp));
    int i;
    for (i=1;i<=100;i++) compute(10000,i);
    int t;
    cin>>t;
    while(t--) {
        int x,k;
        cin>>x>>k;
        cout<<dp[x][k]<<endl;
    }
    return 0;
}