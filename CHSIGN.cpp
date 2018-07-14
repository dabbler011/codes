#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n],i,b[n];
        for (i=0;i<n;i++) {
            cin>>a[i];
        }
        if (a[0]<a[1]) {
            a[0]*=-1;
        }
        b[0]=a[0];
        for (i=1;i<n-1;i++) {
            if (a[i]<a[i-1]&&a[i]<b[i-1]&&a[i]<a[i+1]) {
                a[i]*=-1;
            }
            b[i]=a[i]+a[i-1];
        }
        if (a[i]<a[i-1]&&a[i]<b[i-1]) {
            a[i]*=-1;
        }
        for (i=0;i<n;i++) {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}