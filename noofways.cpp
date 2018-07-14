#include <bits/stdc++.h>
using namespace std;

int rec (int n) {
    if (n==0) return 1;
    if (n<0) return 0;
    return rec(n-1)+rec(n-4);
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,i,cnt=0;
        cin>>n;
        cout<<rec(n)<<endl;
    }
    return 0;
}