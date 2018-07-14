#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n%2==0) {
            cout<<n*n/2<<endl;
        } else {
            cout<<(n*(n-1)/2)+n/2+1<<endl;
        }
    }
    return 0;
}