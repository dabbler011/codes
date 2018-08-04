#include <bits/stdc++.h>
using namespace std;

int main () {
    int l,r,a;
    cin>>l>>r>>a;
    int ans;
    if (l<r) {
        if (l+a>r) {
            a=(l+a)-r;
            if (a%2==1) a--;
            cout<<2*r+a;
        } else {
            cout<<2*(l+a);
        }
    } else if (r<l) {
        if (r+a>l) {
            a=(r+a)-l;
            if (a%2==1) a--;
            cout<<2*l+a;
        } else {
            cout<<2*(r+a);
        }
    } else {
        if (a%2==1) a--;
        cout<<l+r+a;
    }
    return 0;
}