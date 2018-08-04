#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,k;
    cin>>n>>k;
    int i,j;
    int arr[n],sum=0,tmp[n],strt=0;
    map<int,int> mp;
    for (i=0;i<n;i++) {
        cin>>arr[i];
        tmp[i]=arr[i];
    }
    sort(arr,arr+n);
    for (i=n-1;i>=n-k;i--) {
        mp[arr[i]]++;
        sum+=arr[i];
    }
    cout<<sum<<endl;
    for (i=0;i<n;i++) {
        if (k==1) break;
        if (mp[tmp[i]]>0) {
            //cout<<i<<" ";
            mp[tmp[i]]--;
            cout<<i-strt+1<<" ";
            strt=i+1;
            k--;
        }
    }
    cout<<n-strt;
    return 0;
}