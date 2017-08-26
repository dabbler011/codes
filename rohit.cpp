#include <bits/stdc++.h>
 
using namespace std;
int is_true(int i,int j , int n, int m){
    if(i >= 0 && i < n && j >= 0 && j < m )
        return 1;
    else
        return 0;
}
int colour_array(int arr[][501],vector < pair <int,int> > & v,int z,int n,int m,int max,int size) {
    int i,count = 0,j,k;
    for(i = z; i < size; i++) {
        for(j = -1; j < 2; j++) {
            for(k = -1; k < 2; k++) {
                if( arr[v[i].first + j][v[i].second + k] != max && is_true(v[i].first + j,v[i].second + k,n,m) == 1){
                    arr[v[i].first + j][v[i].second + k] = max;
                    v.push_back(make_pair(v[i].first + j,v[i].second + k));
                    count++;
                }
            }
        }
    }
    return v.size()-count;
}
int main(){
    int t,n,m,i,j,max,count,z;
    scanf("%d",&t);
    int arr[501][501];
    vector < pair<int,int> > v;
    while(t--){
        scanf("%d %d",&n,&m);
        max = -1;
        count = 0;
        for(i = 0; i < n; i++){
            for(j = 0; j < m; j++) {
                scanf("%d",&arr[i][j]);
                if(arr[i][j] > max){
                    v.clear();
                    max = arr[i][j];
                    v.push_back(make_pair(i,j));
                }
                else if(arr[i][j] == max)
                    v.push_back(make_pair(i,j));
            }
        }
        z = 0 ;
        if(v.size() == n*m)
            cout<<"0"<<endl;
        else{
            while(v.size() != n*m){
                z = colour_array(arr,v,z,n,m,max,v.size());
                count++;
            }
            cout<<count<<endl;
        }
        v.clear();
    }
    return 0;
}