#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,a[301],i,j,maxi=0,count=0,temp;
        cin>>n;
        for (i=0;i<=300;i++) a[i]=0;
        for (i=0;i<n;i++) {
            cin>>temp;
            count=0;
            for (j=0;j<temp;j++) {
                count=max(count,a[j]);
            }
            a[temp]=count+1;
            maxi=max(maxi,a[temp]);
        }
        cout<<maxi<<endl;
    }
    return 0;
}