#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,m;
    cin>>n>>m;
    int a[n],b[m],i=1,j=1,ans=1;
    for (i=0;i<n;i++) {
        cin>>a[i];
    }
    for (i=0;i<m;i++) cin>>b[i];
    i=1;
    int sum1=a[0];
    int sum2=b[0];
    while (i<n&&j<m) {
        if (sum1==sum2) {
            ans++;
            sum1=a[i];
            sum2=b[j];
            i++;
            j++;
        } else if (sum1<sum2) {
            sum1+=a[i];
            i++;
        } else {
            sum2+=b[j];
            j++;
        }
    }
    cout<<ans;
    return 0;
}