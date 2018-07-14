#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int temp,gd,i;
        cin>>temp;
        gd=temp;
        for (i=1;i<n;i++) {
            cin>>temp;
            gd=__gcd(temp,gd);
        }
        if (gd==1) {
            cout<<0<<endl;
        } else {
            cout<<"-1"<<endl;
        }
    }
    return 0;
}