#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int temp,ans=0;
        while (n--) {
            cin>>temp;
            ans^=temp;
        }
        cout<<ans*2<<endl;
    }
    return 0;
}