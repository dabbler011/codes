#include <bits/stdc++.h>
using namespace std;

int chck[300000];
int hsh[300000][26];
string str;
vector<pair<int,int> > v[300000];
int maxfreq(int i) {
    int ans=0;
    for (int j=0;j<26;j++) ans=max(ans,hsh[i][j]);
    return ans;
}

void addmaxfreq(int i,int k) {
    for (int j=0;j<26;j++) hsh[i][j]=max(hsh[k][j],hsh[i][j]);
}

int rec(int i,int *maxim) {
    int j;
    if (chck[i]==1) return 0;
    for (j=0;j<v[i].size();j++) {
        if (v[i][j].second==1) return -1;
        v[i][j].second=1;
        if (rec(v[i][j].first,maxim)==-1) return -1;
        addmaxfreq(i,v[i][j].first);
    }
    chck[i]=1;
    hsh[i][str[i]-'a']++;
    *maxim=max(*maxim,maxfreq(i));
    return 0;
}

int main () {
    int n,m,x,y;
    cin>>n>>m;
    cin>>str;
    
    int i,j;
    for (i=0;i<n;i++) {
        for (j=0;j<26;j++) {
            hsh[i][j]=0;
        }
    }
    for (i=0;i<m;i++) {
        cin>>x>>y;
        x--;
        y--;
        v[x].push_back(make_pair(y,0));
    }
    int *ans=new int(0);
    for (i=0;i<n;i++) {
        if (rec(i,ans)==-1) {
            cout<<-1;
            exit(0);
        }
    }
    cout<<*ans;
    return 0;
}