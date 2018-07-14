#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n],i=0,j=n-1,ans=0;
        while (i<j) {
            if (a[i]<a[j]) {
                i++;
                ans++;
                a[i]+=a[i-1];
            } else if (a[i]>a[j]) {
                j--;
                ans++;
                a[j]+=a[j+1];
            } else {
                i++;
                j--;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}