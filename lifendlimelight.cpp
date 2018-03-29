#include <bits/stdc++.h>
using namespace std;

int a[10000001];

int main () {
    int i;
    a[0]=0;
    a[1]=1;
    a[2]=10;
    int maxe=4;
    int maxo=1;
    for (i=3;i<10000001;i++) {
        if(i%2==0) {
            a[i]=(a[i-2]+((((maxe+maxe)%1000000009+maxe)%1000000009+maxe)%1000000009+(10*(i-1))%1000000009)%1000000009)%1000000009;
            maxe+=4*(i-1);
            maxe=maxe%1000000009;
             
        } else {
            a[i]=(a[i-2]+((((maxo+maxo)%1000000009+maxo)%1000000009+maxo)%1000000009+(10*(i-1))%1000000009)%1000000009)%1000000009;
            maxo+=4*(i-1);
            maxo=maxo%1000000009;
        }
    }
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}