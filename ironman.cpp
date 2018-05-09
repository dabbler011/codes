#include <bits/stdc++.h>
using namespace std;

long int i,n,first[100001],second[100001],fchange[100001],schange[100001],dp[100001][2];

long int compute (int pos,int type) {
    long int a,b,c,d;
    if (pos==n) return 0;
    if (dp[pos][type]!=0) return dp[pos][type];
    if (type==0) {
        a=first[pos]+compute(pos+1,0);
        b=first[pos]+fchange[pos]+compute(pos+1,1);
    } else if (type==1) {
        a=second[pos]+compute(pos+1,1);
        b=second[pos]+compute(pos+1,0)+schange[pos];
    }
    return dp[pos][type]=min(a,b);
}
 
int main () {
    int t;
    cin>>t;
    while(t--) {
        cin>>n;
        for (i=0;i<n;i++) {
            cin>>first[i];
        }
        for (i=0;i<n;i++) {
            cin>>second[i];
        }
        for (i=0;i<n-1;i++) {
            cin>>fchange[i];
        }
        for (i=0;i<n-1;i++) {
            cin>>schange[i];
        }
        compute(0,0);
        compute(0,1);
        cout<<min(dp[0][0],dp[0][1])<<endl;
         for (i=0;i<n;i++) {
            dp[i][0]=0;
            dp[i][1]=0;
        }
    }
    return 0;
}