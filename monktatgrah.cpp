#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,flag=1;
    cin>>n;
    int a[n],i,ans=0;
    for (i=0;i<n;i++) {
        int temp;
        cin>>temp;
        ans+=temp;
        if (temp>n-1)
            flag=0;
    }
    if (ans!=2*(n-1)) flag=0;
    if (flag==0) cout<<"No";
    else cout<<"Yes";
    return 0;
}