#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int l;
        cin>>l;
        long long int ans=l;
        int up[l-1],low[l-1],i;
        for (i=0;i<l-1;i++) {
            cin>>up[i];
            if (i+1+up[i]>ans) ans=i+1+up[i];
        }
        for (i=0;i<l-1;i++) {
            cin>>low[i];
            if (i+1+low[i]>ans) ans=i+1+low[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}