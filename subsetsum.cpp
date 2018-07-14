#include <bits/stdc++.h>
using namespace std;

bool check(int a[],int n,int sum) {
    bool mat[sum+1][n+1];
    int i,j;
    for (i=0;i<=n;i++) mat[0][i]=true;
    for (i=1;i<=sum;i++) mat[i][0]=false;
    for (i=1;i<=sum;i++) {
        for (j=1;j<=n;j++) {
            mat[i][j]=mat[i][j-1];
            if(a[j-1]<=i) {
                mat[i][j]=mat[i][j]||mat[i-a[j-1]][j-1];
            }
        }
    }
    return mat[sum][n];
}

/*
bool func(int a[], int i, int n, long sum)
{

    if(sum<0||i>=n)
    return 0;
    if(sum==0)
    return 1;
    if(a[i]==sum)
    return 1;
    if(func(a,i+1,n,sum-a[i]))
    return 1;
    if(func(a,i+1,n,sum))
    return 1;
    return 0;
}
*/

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n],i,sum=0;
        for (i=0;i<n;i++) {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==1) {
            cout<<"NO\n";
        } else if (check(a,n,sum/2)) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}