#include <bits/stdc++.h>
using namespace std;

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
        int buy=0,sell=0,ans=0;
        for (i=1;i<n;i++) {
            if (a[i]>=a[sell]) {
                a[sell]=a[i];
            } else {
                if (buy!=sell) {
                    ans=1;
                    printf ("(%d %d) ",buy,sell);
                }
                buy=i;
                sell=i;
            }
        }
        if (ans==0) {
            cout<<"No Profit";
        }
        cout<<endl;
    }
    return 0;
}