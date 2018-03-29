#include <bits/stdc++.h>
using namespace std;

int n,dp[200];

int compute (int ques) {
    if (ques == 10 || ques == 12) return dp[ques]=1;
    if (ques < 12) return dp[ques]=1000;
    if (dp[ques]!=0) return dp[ques];
    int a = 1+compute(ques-10);
    int b = 1+compute(ques-12);
    return dp[ques]=min(a,b);
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        cin>>n;
        int ans = compute(n);
        if (ans>=1000) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}