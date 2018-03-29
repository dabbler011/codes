    #include <bits/stdc++.h>
    using namespace std;

    long long n,k,dp[300][3],d;

    long long compute (long long m,long long satisfied) {
        
        if (m>n) return 0;
        if(m==n)return satisfied;
        long long ans=0;
        if(dp[m][satisfied]!=-1) return dp[m][satisfied];

        for (long long i=1;i<=k;i++) {
            if (i>=d) {
                ans+=compute(m+i,1);
            } else {
                ans+=compute(m+i,satisfied&1);
            }
            ans%=1000000007;
        }
        return dp[m][satisfied]=ans;
    }

    int main() {
        memset(dp,-1,sizeof(dp));
        cin>>n>>k>>d;
        cout<<compute(0,0)<<endl;
        return 0;
    }