#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n],i,j;
        for (i=0;i<n;i++) {
            cin>>a[i];
        }
        int max,ans=0;
        i=0;
        while(i<n-1) {
            if(a[i]==0) break;
            if (i+a[i]>=n-1) {
                i=n-1;
                ans++;
                break;
            }
            max=0;
            for(j=i+1;j<=i+a[i];j++) {
                if (j+a[j]>i+a[i] && j+a[j]>max+a[max]) {
                    max=j;
                }
            }
            ans++;
            if (max==0) i+=a[i];
            else i=max;
        }
        if (i<n-1) cout<<-1<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}