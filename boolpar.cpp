#include <bits/stdc++.h>
using namespace std;

int dp[100][100][2];
int mod=1003;

int rec(string str,int strt,int end,bool exp) {
    //cout<<strt<<" "<<end<<" ";
    if (exp==true) {
      //  cout<<1<<endl;
        if (dp[strt][end][0]!=-1) {
            //cout<<strt<<" "<<end<<"aa\n"; 
            return dp[strt][end][0];
        } 
    } else {
        //cout<<0<<endl;
         if (dp[strt][end][1]!=-1) {
            //cout<<strt<<" "<<end<<"aa\n"; 
            return dp[strt][end][1];
        } 
    }
    
    if (strt==end) {
        if ((str[strt]=='T' && exp) || (str[strt]=='F' && !exp)) return 1;
        return 0;
    }
    int i,ans=0;
    for (i=strt;i<=end;i++) {
        if (str[i]!='T'&&str[i]!='F') {
            //cout<<strt<<str[i]<<" nn\n";
            if (str[i]=='&') {
                if (exp) {
                    ans+=(rec(str,strt,i-1,exp)*rec(str,i+1,end,exp))%mod;
                    ans%=mod;
                } else {
                    ans+=(rec(str,strt,i-1,true)*rec(str,i+1,end,false))%mod;
                    ans%=mod;
                    ans+=(rec(str,strt,i-1,false)*rec(str,i+1,end,true))%mod;
                    ans%=mod;
                    ans+=(rec(str,strt,i-1,false)*rec(str,i+1,end,false))%mod;
                    ans%=mod;
                }
            } else if (str[i]=='|') {
                if (!exp) {
                    ans+=(rec(str,strt,i-1,exp)*rec(str,i+1,end,exp))%mod;
                    ans%=mod;
                } else {
                    ans+=(rec(str,strt,i-1,true)*rec(str,i+1,end,false))%mod;
                    ans%=mod;
                    ans+=(rec(str,strt,i-1,false)*rec(str,i+1,end,true))%mod;
                    ans%=mod;
                    ans+=(rec(str,strt,i-1,true)*rec(str,i+1,end,true))%mod;
                    ans%=mod;
                    //cout<<ans<<str[i]<<" nn\n";
                    //cout<<strt<<i<<str[i]<<" nn\n";
                }
            } else if (str[i]=='^') {
                if (exp) {
                    ans+=(rec(str,strt,i-1,exp)*rec(str,i+1,end,!exp))%mod;
                    ans%=mod;
                    ans+=(rec(str,strt,i-1,!exp)*rec(str,i+1,end,exp))%mod;
                    ans%=mod;
                } else {
                    ans+=(rec(str,strt,i-1,!exp)*rec(str,i+1,end,!exp))%mod;
                    ans%=mod;
                    ans+=(rec(str,strt,i-1,exp)*rec(str,i+1,end,exp))%mod;
                    ans%=mod;
                }
            }
        }
    }
    if (exp) {
        dp[strt][end][0]=ans;
    } else {
        dp[strt][end][1]=ans;
    }
    return ans;
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string str;
        cin>>str;
        //cout<<str;
        int i,j,k;
        for (i=0;i<n;i++) {
            for (j=0;j<n;j++) {
                for (k=0;k<2;k++) {
                    dp[i][j][k]=-1;
                }
            }
        }
        cout<<rec(str,0,n-1,true)<<endl;
    }
    return 0;
}