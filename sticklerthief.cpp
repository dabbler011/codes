#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        long int a[n+1],i;
        a[0]=0;
        for (i=1;i<=n;i++) {
            cin>>a[i];
            if (i>1) {
                a[i]=max(a[i]+a[i-2],a[i-1]);
            }
        }
        cout<<a[n]<<endl;
    }
    return 0;
}