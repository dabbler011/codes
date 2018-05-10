#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n==1) {
            cout<<1<<endl;
        } else {
            int temp,i,sum=0;
            for (i=0;i<n-1;i++) {
                cin>>temp;
                sum+=temp;
            }
            cout<<(n*(n+1)/2)-sum<<endl;
        }
    }
    return 0;
}