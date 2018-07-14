#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,i;
        cin>>n;
        long long int a[n],total=0,temp=0;
        for (i=0;i<n;i++) {
            cin>>a[i];
            total^=a[i];
        }
        int digit=0;
        while (!((digit>>total)&1)) {
            digit++;
        }
        for (i=0;i<n;i++) {
            if ((digit>>total)&1) {
                temp^=a[i];
            }
        }
        cout<<min(temp,temp^total)<<" "<<max(temp,temp^total)<<endl;
    }
    return 0;
}