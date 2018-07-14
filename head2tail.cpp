#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int strt[26],end[26],i,cnt=0;
        for (i=0;i<26;i++) {
            strt[i]=0;
            end[i]=0;
        }
        for (i=0;i<n;i++) {
            string str;
            cin>>str;
            strt[str[0]-'a']++;
            end[str[str.length()-1]-'a']++;
        }
        for (i=0;i<26;i++) {
            if (strt[i]>end[i]) {
                cnt+=(strt[i]-end[i]);
            }
        }
        if (cnt>1) cout<<"Head to tail ordering is not possible.\n";
        else cout<<"Head to tail ordering is possible.\n";
    }
    return 0;
}