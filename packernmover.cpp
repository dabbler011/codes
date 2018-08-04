#include <bits/stdc++.h>
using namespace std;

long long int ans;

bool chck(long long int arr[],int p,int m,long long int val) {
    int cnt=1,i;
    long long int sum=0;
    for (i=0;i<p;i++) {
        sum+=arr[i];
        if (sum>val) {
            sum=arr[i];
            cnt++;
        }
    }
    if (cnt<=m) return true;
    return false;
}

void rec (long long int arr[],int p,int m,long long int strt,long long int end) {
    if (strt>end) return;
    long long int mid=(strt+end)/2;
    if (chck(arr,p,m,mid)) {
        ans=min(ans,mid);
        rec(arr,p,m,strt,mid-1);
    } else {
        rec(arr,p,m,mid+1,strt);
    }
}

int main () {
    int m,p;
    cin>>m>>p;
    long long int arr[p],i,sum=0,j,max=0;
    for (i=0;i<p;i++) {
        cin>>arr[i];
        sum+=arr[i];
        maxi=max(maxi,arr[i]);
    }
    ans=sum;
    rec(arr,p,m,maxi,sum);
    cout<<ans;
    return 0;
}