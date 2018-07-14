#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,i,temp;
    cin>>n;
    priority_queue <int> lft;
    priority_queue<int,vector<int>,greater<int>> rt;
    cin>>temp;
    lft.push(temp);
    cout<<temp;
    for (i=2;i<=n;i++) {
        cout<<endl;
        cin>>temp;
        if (i%2==0) {
            if (temp>=lft.top()) {
                rt.push(temp);
            } else {
                rt.push(lft.top());
                lft.pop();
                lft.push(temp);
            }
            cout<<(rt.top()+lft.top())/2;
        } else {
            if (temp<=rt.top()) {
                lft.push(temp);
            } else {
                lft.push(rt.top());
                rt.pop();
                rt.push(temp);
            }
            cout<<lft.top();
        }
    }
    return 0;
}