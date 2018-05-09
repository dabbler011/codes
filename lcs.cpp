#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        string s1,s2;
        int n=min(a,b),m=max(a,b);
        int arr[n],i,j;
        memset(arr,0,sizeof(arr));
        cin>>s1>>s2;
        if (a<b) {
            string temp=s1;
            s1=s2;
            s2=temp;
        }
        for (i=0;i<m;i++) {
            int changed=0,temp;
            for (j=0;j<n;j++) {
                if (s1[i]==s2[j]&&changed==0) {
                    if (j==0){
                        temp=arr[j];
                        arr[j]=1;
                        if(temp!=arr[j]) changed=1;
                    }
                    else {
                        temp=arr[j];
                        arr[j]=max(arr[j],arr[j-1]+1);
                        if(temp!=arr[j]) changed=1;
                        else changed=0;
                    }
                } else if(j!=0){
                    temp=arr[j];
                    arr[j]=max(arr[j],arr[j-1]);
                    if(temp!=arr[j]) changed=1;
                        else changed=0;
                }
            }
        }
        cout<<arr[n-1]<<endl;
    }
    return 0;
}