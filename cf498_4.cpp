#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,i,j,ans=0;
    cin>>n;
    string frst,sec;
    cin>>frst>>sec;
    i=0;
    j=n-1;
    while (i<j) {
        if (sec[i]==sec[j]) {
            if (frst[i]!=frst[j]) {
                ans++;
            }
        } else {
            if ((frst[i]==sec[i]&&frst[j]==sec[j])||(frst[i]==sec[j]&&frst[j]==sec[i])) {}
            else if ((frst[i]==sec[i]||frst[j]==sec[j])||(frst[i]==sec[j]||frst[j]==sec[i])) {
                ans++;
            } else {
                ans+=2;
            }
        }
        i++;
        j--;
    }
    if (i==j) {
        if (frst[i]!=sec[i]) ans++;
    }
    cout<<ans;
    return 0;
}