#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,i;
        cin>>n;
        int a[n],csum[n],max;
        cin>>a[0];
        csum[0]=a[0];
        max=a[0];
        a[0]=0;
        for (i=1;i<n;i++) {
            cin>>a[i];
            csum[i]=csum[i-1]+a[i];
            a[i]=min(csum[i-1],a[i-1]);
            if (max<csum[i]-a[i]) {
                max=csum[i]-a[i];
            }
        }
        cout<<max<<endl;
    }
    return 0;
}