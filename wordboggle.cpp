#include <bits/stdc++.h>
using namespace std;

bool dfs(string chck,int ptr,int i, int j,int n,int m,vector<vector<char> > boggle, vector<vector<int> > used) {
    
    if (chck.length()==ptr) return true;
    if (i==n||j==m||i==-1||j==-1) return false;
    if (used[i][j]==1||boggle[i][j]!=chck[ptr]) return false;
    used[i][j]=1;
    bool ret=(dfs(chck,ptr+1,i+1,j,n,m,boggle,used)||dfs(chck,ptr+1,i,j+1,n,m,boggle,used)||dfs(chck,ptr+1,i,j-1,n,m,boggle,used)||dfs(chck,ptr+1,i-1,j,n,m,boggle,used)||dfs(chck,ptr+1,i+1,j+1,n,m,boggle,used)||dfs(chck,ptr+1,i-1,j+1,n,m,boggle,used)||dfs(chck,ptr+1,i+1,j-1,n,m,boggle,used)||dfs(chck,ptr+1,i-1,j-1,n,m,boggle,used));
    used[i][j]=0;
    return ret;
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        int x,i,j;
        cin>>x;
        string dic[x];
        for (i=0;i<x;i++) {
            cin>>dic[i];
        }
        int n,m;
        cin>>n>>m;
        vector<vector<pair<int,int> > > ind(26);
        vector<string> ans;
        vector<vector<int> > used(n);
        vector<vector<char> > boggle(n);
        
        

    }
    return 0;

    /*bool dfs(string chck,int ptr,int i, int j,int n,int m,vector<vector<char> > boggle, vector<vector<int> > used) {
    //cout<<"yaya";
    if (chck.length()==ptr) {
        
        return true;
    }
    if (i==n||j==m||i==-1||j==-1) return false;
    if (used[i][j]==1||boggle[i][j]!=chck[ptr]) return false;
    used[i][j]=1;
    bool ret=(dfs(chck,ptr+1,i+1,j,n,m,boggle,used)||dfs(chck,ptr+1,i,j+1,n,m,boggle,used)||dfs(chck,ptr+1,i,j-1,n,m,boggle,used)||dfs(chck,ptr+1,i-1,j,n,m,boggle,used)||dfs(chck,ptr+1,i+1,j+1,n,m,boggle,used)||dfs(chck,ptr+1,i-1,j+1,n,m,boggle,used)||dfs(chck,ptr+1,i+1,j-1,n,m,boggle,used)||dfs(chck,ptr+1,i-1,j-1,n,m,boggle,used));
    used[i][j]=0;
    return ret;
}
    

class Solution {
public:
    vector<string> findWords(vector<vector<char>>& boggle, vector<string>& dic) {
        vector<vector<pair<int,int> > > ind(26);
        set<string> ans;
        vector<string> l;
        if (boggle.size()==0) return l;
        int x=dic.size(),i,j,n=boggle.size(),m=boggle[0].size();
        vector<vector<int> > used(n);
        for (i=0;i<n;i++) {
            used[i]=vector <int> (m);
           // boggle[i]=vector <char> (m);
            for (j=0;j<m;j++) {
                used[i][j]=0;
                cin>>boggle[i][j];
                ind[boggle[i][j]-'a'].push_back(make_pair(i,j));
            }
        }
        for (i=0;i<x;i++) {
            if (ind[dic[i][0]-'a'].empty()) continue;
            for (j=0;j<ind[dic[i][0]-'a'].size();j++) {
                if (dfs(dic[i],0,ind[dic[i][0]-'a'][j].first,ind[dic[i][0]-'a'][j].second,n,m,boggle,used)) {
                   //cout<<dic[i]<<" ";
                    ans.insert(dic[i]);
                    break;
                }
            }
        }
        for (auto i:ans) {
            l.push_back(i);
        }
        return l;
    }
};*/
}