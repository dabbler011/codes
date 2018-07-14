#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int arr[n],i,j;
        for (i=0;i<n;i++) {
            cin>>arr[i];
        }
        for (i=0;i<n;i++) {
            arr[i]+=(arr[arr[i]]%n)*n;
        }
        for (i=0;i<n;i++) {
            arr[i]/=n;
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}