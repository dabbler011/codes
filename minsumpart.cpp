#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n],i,sum=0;
        for (i=0;i<n;i++) {
            cin>>a[i];
            sum+=a[i];
        }
        bool dp[n+1][sum+1];
        for (i=0;i<=n;i++) {
            dp[i][0]=true;
        }
        for (i=1;i<=sum;i++) {
            dp[0][i]=false;
        }
        for (i=1;i<=n;i++) {
            for (int j=1;j<=sum;j++) {
                dp[i][j]=dp[i-1][j];
                if (a[i-1]<=j) {
                    dp[i][j]|=dp[i-1][j-a[i-1]];
                }
            }
        }
        for (i=sum/2;i>=0;i--) {
            if (dp[n][i]) {
                cout<<sum-2*i<<endl;
                break;
            }
        }
    }
    return 0;
}