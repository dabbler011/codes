#include <bits/stdc++.h>
using namespace std;

bool cmp (string a,string b) {
    return a+b<b+a;
}

int main () {
    int n,i;
    cin>>n;
    string s[n];
    for (i=0;i<n;i++) {
        cin>>s[i];
    }
    sort(s,s+n,cmp);
    for (i=0;i<n;i++) {
        cout<<s[i];
    }
    return 0;
}