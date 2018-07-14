#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int i,j=0;
        int a[n],mx=0;
        long long int ans=0,temp=0;
        for (i=0;i<n;i++) {
            cin>>a[i];
            mx=max(mx,a[i]);
        }
        while (mx>>j!=0) {
            temp=0;
            for (i=0;i<n;i++) {
                if ((a[i]>>j)&1==1) temp++;
            }
            ans+=(temp*(n-temp))*2;
            j++;
        }
        cout<<ans<<endl;
    }
    return 0;
}