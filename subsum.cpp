#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n,s;
        cin>>n>>s;
        int arr[n],i,init=-1,finl=-1;
        map<int,int> mp;
        mp[0]=0;
        for (i=0;i<n;i++) {
            cin>>arr[i];
            if(i!=0) {
                arr[i]+=arr[i-1];
                if(mp.find(arr[i]-s)!=mp.end() && init == -1) {
                    init=mp[arr[i]-s]+1;
                    finl=i+1;
                }
            }
            mp[arr[i]]=i+1;
        }
        if (init==-1) {
            cout<<-1<<endl;
        } else {
            cout<<init<< " " <<finl<<endl;
        }
    }
    return 0;
}