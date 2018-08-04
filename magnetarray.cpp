#include <bits/stdc++.h>
using namespace std;

double A=0.0000000000001;

double binsrch (double arr[],int n, double strt, double end) {
    if (strt>end) return 0.0;
    int j;
    double mid = (strt+end)/2;
    //if ((int)mid*100==382) cout<<mid<<endl;
    double frc=0.0;
    for (j=0;j<n;j++) {
        frc+=(1/(mid-arr[j]));
    }
    //cout<<strt<<" "<<end<<" "<<frc<<endl;
    if (frc<0.0000000000001&&frc>-0.0000000000001) return mid;
    if (frc>0) return binsrch(arr,n,mid+A,end);
    return binsrch(arr,n,strt,mid-A);
}

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,i;
        cin>>n;
        double arr[n];
        for (i=0;i<n;i++) {
            cin>>arr[i];
        }
        for (i=0;i<1;i++) {
            printf ("%.2f ",binsrch(arr,n,arr[i],arr[i+1]));
        }
        cout<<endl;
    }
    return 0;
}