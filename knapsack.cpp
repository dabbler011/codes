#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,w,i,j;
        cin>>n>>w;
        vector <pair<int,int>> vec;
        for (i=0;i<n;i++) {
            int temp;
            cin>>temp;
            vec.push_back(make_pair(0,temp));
        }
        for (i=0;i<n;i++) {
            int temp;
            cin>>temp;
            vec[i].first=temp;
        }
        sort(vec.begin(),vec.end());
        int mat[n][w+1];
        for (i=0;i<n;i++) {
            for (j=0;j<=w;j++) {
                if (i==0) {
                    if(vec[i].first <= j) {
                        mat[i][j]=vec[i].second;
                    } else {
                        mat[i][j]=0;
                    }
                } else if (j==0) {
                    mat[i][j]=0;
                } else {
                    if (vec[i].first <= j) {
                        mat[i][j]=max(mat[i-1][j],vec[i].second+mat[i-1][j-vec[i].first]);
                    } else {
                        mat[i][j]=mat[i-1][j];
                    }
                } 
            }
        }
        cout<<mat[n-1][w]<<endl;
    }
    return 0;
}