#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        string str;
        cin>>str;
        int i,sum=4,bet=1;
        for (i=0;i<str.length();i++) {
            if (bet>sum) {
                sum=-1;
                break;
            }
            if (str[i]=='W') {
                sum+=bet;
                bet=1;
            } else {
                sum-=bet;
                bet*=2;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}