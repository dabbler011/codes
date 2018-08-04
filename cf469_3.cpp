#include <bits/stdc++.h>
using namespace std;



int main () {
    string str;
    cin>>str;
    int i,cnt=0,n=str.length();
    int fol[n];
    queue<int> q;
    for (i=0;i<n;i++) {
        fol[i]=-1;
        if (str[i]=='0') {
            q.push(i);
        } else {
            if (q.empty()) {
                cout<<-1;
                return 0;
            }
            int temp=q.front();
            fol[temp]=i;
            q.pop();
        }
    }
    while (!q.empty()) q.pop();
    for (i=n-1;i>=0;i--) {
        if (str[i]=='0') {
            q.push(i);
        } else {
            if (q.empty()) {
                cout<<-1;
                return 0;
            }
            int temp=q.front();
            fol[i]=temp;
            q.pop();
        }
    }
    int ans=0;
    for (i=0;i<n;i++) {
        if (fol[i]==-1) {
            ans++;
        }
    }
    cout<<ans<<endl;
    for (i=0;i<n;i++) {
        if (fol[i]==-2) continue;
        int cnt=1,j=fol[i];
        queue<int> qu;
        qu.push(i+1);
        while (j!=-1) {
            qu.push(j+1);
            int k=j;
            j=fol[j];
            fol[k]=-2;
            cnt++;
        }
        cout<<cnt<<" ";
        while (!qu.empty()) {
            cout<<qu.front()<<" ";
            qu.pop();
        }
        cout<<endl;
    }
}