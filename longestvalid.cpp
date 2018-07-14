#include <bits/stdc++.h>
using namespace std;

int longestValidParentheses(string A) {
    int i,n=A.length(),ans=0;
    stack<pair<char,int> > stck;
    int arr[n];
    for (i=0;i<n;i++) {
        arr[i]=0;
        if (A[i]=='(') stck.push(make_pair(A[i],i));
        else {
            if (!stck.empty()) {
                arr[i]=1;
                arr[stck.top().second]=1;
                stck.pop();
            }
        }
    }
    for (i=1;i<n;i++) {
        if (arr[i-1]!=0&&arr[i]!=0) {
            arr[i]+=arr[i-1];
            ans=max(ans,arr[i]);
        }
    }
    return ans;
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        cout<<longestValidParentheses(s)<<endl;
    }
    return 0;
}
