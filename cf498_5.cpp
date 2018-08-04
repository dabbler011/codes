#include <bits/stdc++.h>
using namespace std;

vector <set<int> > vec (200001);
set<int>::iterator it;
int arr[200001],mp[200001],size[200001];
int ind=0;

int dfs (int pos) {
    arr[ind]=pos;
    mp[pos]=ind;
    ind++;
    int j;
    size[pos]=1;
    for (auto o:vec[pos]) {
        size[pos]+=dfs (o);
    }
    return size[pos];
}

int main () {
    int n,q,i,tmp;
    cin>>n>>q;
    for (i=0;i<n-1;i++) {
        cin>>tmp;
        vec[tmp].insert(i+2);
    }
    arr[0]=1;
    dfs (1);
    while (q--) {
        int u,k;
        cin>>u>>k;
        //cout<<u<<vec[u].size(); 
        if (size[u]>=k) {
            int as=mp[u];
            cout<<arr[as+k-1]<<endl;
        } else {
            cout<<-1<<endl;

        }
    }
    return 0;
}