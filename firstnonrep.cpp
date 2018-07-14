#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[26],i;
        queue <char> q;
        for (i=0;i<26;i++) {
            a[i]=0;
        }
        for (i=0;i<n;i++) {
            char temp;
            cin>>temp;
            if (a[temp-'a']==0) {
                q.push(temp);
            }
            a[temp-'a']++;
            while (!q.empty()) {
                if (a[q.front()-'a']==1) {
                    cout<<q.front();
                    break;
                }
                q.pop();
            }
            if(q.empty()) {
                cout<<-1;
            }
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}