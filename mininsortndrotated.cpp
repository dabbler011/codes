#include <bits/stdc++.h>
using namespace std;

int min(int a[],int l,int r) {
    mid=(l+r)/2;
    //if (a[mid]<a[mid-1])
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n],i;
        for (i=0;i<n;i++) {
            cin>>a[i];
        }
        if (a[0]<a[n-1]) {
            cout<<a[0]<<endl;
        } else {

        }
    }
    return 0;
}