#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int arr[n+1],i,dp[n+1];
    arr[0]=0;
    dp[0]=0;
    for (i=1;i<=n;i++) {
        cin>>arr[i];
        dp[i]=dp[i-1]+1;
        dp[i]+=(dp[i]-dp[arr[i]-1]);
        if (dp[i]<0) {
            dp[i]+=1000000007;
        }
        dp[i]%=1000000007;
    }
    cout<<dp[n];
    return 0;
}