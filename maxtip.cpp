#include <bits/stdc++.h>
using namespace std;

int dp[106][106][106];

int rec (int A[],int B[],int i,int x,int y,int n,int ans) {
    if (x<0||y<0) return 0;
    if (i==n) {
        return ans;
    }
    if (dp[x][y][i]!=-1) {
       // if (dp[x][y][i]==43) cout<<x<<" "<<y<<" "<<i<<endl;
        return dp[x][y][i]+ans;
    } 
    dp[x][y][i]=max(rec(A,B,i+1,x-1,y,n,ans+A[i]),rec(A,B,i+1,x,y-1,n,ans+B[i]))-ans;
       // if (dp[x][y][i]==43) cout<<x<<" "<<y<<" "<<i<<endl;
    return dp[x][y][i]+ans;
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,x,y,i,j,k;
        cin>>n>>x>>y;
        for (i=0;i<=x;i++) {
            for (j=0;j<=y;j++) {
                for (k=0;k<=n;k++) {
                    dp[i][j][k]=-1;
                }
            }
        }
        int A[n],B[n];
        for (i=0;i<n;i++) {
            cin>>A[i];
        }
        for (i=0;i<n;i++) {
            cin>>B[i];
        }
        cout<<rec(A,B,0,x,y,n,0)<<endl;
    }
    return 0;
}