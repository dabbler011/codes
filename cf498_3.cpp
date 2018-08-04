#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,i,pos1=-1,pos2=n,j;
    cin>>n;
    long long int arr[n],strt=0,end=0;
    for (i=0;i<n;i++) {
        cin>>arr[i];
    }
    i=0;
    j=n-1;
    while (i<j) {
        strt+=arr[i];
        end+=arr[j];
        if (strt==end) {
            pos1=i;
            i++;
            j--;
        } else if (strt<end) {
            i++;
            end-=arr[j];
        } else {
            j--;
            strt-=arr[i];
        }
    }
    strt=0;
    for (i=0;i<=pos1;i++) {
        strt+=arr[i];
    }
    cout<<strt;
 }