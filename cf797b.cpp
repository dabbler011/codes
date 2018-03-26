#include <bits/stdc++.h>
using namespace std;

int main () {
    long long int n;
    cin>>n;
    long long int a[n],i,sum=0,maxneg=-100000,minpos=100000;
    for (i=0;i<n;i++) {
        cin>>a[i];
        if(a[i]>0) {
            sum+=a[i];
            if(a[i]%2==1 && a[i]<minpos) {
                minpos=a[i];
            }
        } else if (abs(a[i])%2==1 && a[i]>maxneg) {
            maxneg=a[i];
        }
    }
    if(sum%2==1) {
        cout<<sum;
    } else {
        cout<<max(sum-minpos,sum+maxneg);
    }
    return 0;
}