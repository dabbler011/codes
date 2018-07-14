#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n],hash[101],i,j,ans=0;
        for (i=0;i<=100;i++) hash[i]=-1;
        for (i=0;i<n;i++) {
            cin>>a[i];
            j=a[i];
            if (hash[a[i]]!=-1) {
                ans=max(ans,i-hash[a[i]]);
            }
            while (hash[j]==-1 && j<=100) {
                hash[j]=i;
                j++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}