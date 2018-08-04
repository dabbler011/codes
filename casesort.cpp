#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,i,j,k;
        cin>>n;
        string s;
        cin>>s;
        for (i=0;i<n;i++) {
            if (s[i]>='a'&&s[i]<='z') {
                int k=i;
                for (j=i+1;j<n;j++) {
                    if (s[j]>='a'&&s[j]<='z') {
                        if (s[k]>s[j]) {
                            k=j;
                        }
                    }
                }
                char t=s[i];
                s[i]=s[k];
                s[k]=t;
            }
        }
        for (i=0;i<n;i++) {
            if (s[i]>='A'&&s[i]<='Z') {
                int k=i;
                for (j=i+1;j<n;j++) {
                    if (s[j]>='A'&&s[j]<='Z') {
                        if (s[k]>s[j]) {
                            k=j;
                        }
                    }
                }
                char t=s[i];
                s[i]=s[k];
                s[k]=t;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}