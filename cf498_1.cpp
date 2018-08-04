#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin>>n;
    int i;
    long long int temp;
    for (i=0;i<n;i++) {
        cin>>temp;
        if (temp%2==1) {
            cout<<temp<<" ";
        } else {
            cout<<temp-1<<" ";
        }
    }
    return 0;
}