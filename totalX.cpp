#include <bits/stdc++.h>
using namespace std;

bool dp[50][50];

void rec(string str[],int n,int i,int j) {
    if (i<0||j<0||i>=n||j>=str[0].length()) return;
    if (dp[i][j]) return;
    dp[i][j]=true;
    rec(str,n,i+1,j);
    rec(str,n,i-1,j);
    rec(str,n,i,j+1);
    rec(str,n,i,j-1);
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,m,i,j,cnt=0;
        cin>>n>>m;
        string str[n];
        for (i=0;i<n;i++) {
            cin>>str[i];
            for (j=0;j<m;j++) {
                dp[i][j]=false;
            }
        }
        for (i=0;i<n;i++) {
            for (j=0;j<m;j++) {
                if (!dp[i][j]) {
                    cnt++;
                    rec();
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}