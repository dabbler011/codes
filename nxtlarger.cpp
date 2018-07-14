#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n],i;
        stack<int> st;
        for (i=0;i<n;i++) {
            cin>>a[i];
        }
        st.push(0);
        for (i=1;i<n;i++) {
            while (a[i]>a[st.top()]) {
                a[st.top()]=a[i];
                st.pop();
                if(st.empty()) break;
            }
            st.push(i);
        }
        while (!st.empty()) {
            a[st.top()]=-1;
            st.pop();
        }
        for (i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}