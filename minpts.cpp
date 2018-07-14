#include <bits/stdc++.h>
using namespace std;

int dp[10][10];

void rec (int arr[][10],int i,int j,int pth,int ans,int r,int c) {
    if (i<0||j<0||i>=r||j>=c) return;
    pth+=arr[i][j];
    if (pth<0) {
        ans=max(ans,abs(pth));
    }
    dp[i][j]=min(dp[i][j],ans);
    rec(arr,i+1,j,pth,dp[i][j],r,c);
    rec(arr,i,j+1,pth,dp[i][j],r,c);
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        int r,c;
        cin>>r>>c;
        int arr[r][10],i,j;
        for (i=0;i<r;i++) {
            for (j=0;j<c;j++) {
                dp[i][j]=INT_MAX;
                cin>>arr[i][j];
            }
        }
        rec(arr,0,0,0,0,r,c);
        cout<<dp[r-1][c-1]+1<<endl;
    }
    return 0;
}