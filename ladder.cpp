#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,m,i;
    cin>>n>>m;
    long int arr[n],inc[n],dec[n],icnt=1,idec=0;
    for (i=0;i<n;i++) {
        cin>>arr[i];
    }
    inc[n-1]=0;
    dec[n-1]=0;
    bool iup=false,dup=false;
    for (i=n-2;i>=0;i--) {
        if (arr[i]==arr[i+1]) {
            inc[i]=inc[i+1]+1;
            dec[i]=dec[i+1]+1;
        } else if (arr[i]>arr[i+1]) {
            dec[i]=dec[i+1]+1;
            inc[i]=0;
        } else {
            inc[i]=inc[i+1]+1;
            dec[i]=0;
        }
    }
    //for (i=0;i<n;i++) cout<<inc[i]<<" "<<dec[i]<<endl;
    while (m--) {
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        if (l+inc[l]+dec[l+inc[l]]>=r) {
            cout<<"Yes\n";
        } else {
            cout<<"No\n";
        }
    }
}