#include <iostream>
using namespace std;

int main()
{
    long int n,i;
    cin>>n;
    long long int a[n],rmax[n],lmax[n];
    rmax[0]=-1;
    lmax[n-1]=-1;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=1;i<n;i++){
        if(a[i-1]>a[i]){
            if(a[i-1]>lmax[i-1]){
                lmax[i]=a[i-1];
            }
            else
                lmax[i]=lmax[i-1];
        }
        else
            lmax[i]=lmax[i-1];
    }
    for(i=n-2;i>=0;i--){
        if(a[i+1]>a[i]){
            if(a[i+1]>rmax[i+1])
                rmax[i]=a[i+1];
            else
                rmax[i]=rmax[i+1];
        }
        else
            rmax[i]=rmax[i+1];
    }
    for(i=0;i<n;i++)
        cout<<lmax[i]+rmax[i]<<" ";
    return 0;
}

