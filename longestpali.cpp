#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        string str;
        cin>>str;
        int i=0,max=1,j=0;
        for (i=1;i<str.length();i++) {
            int temp=1,ti1,ti2;
            ti1=i-1;
            ti2=i+1;
            while (ti1>=0&&ti2<str.length()) {
                if (str[ti1]!=str[ti2]) {
                    break;
                }
                temp+=2;
                ti1--;
                ti2++;
            }
            if (temp>max) {
                max=temp;
                j=ti1+1;
            }
            temp=0;
            ti1=i-1;
            ti2=i;
            while (ti1>=0&&ti2<str.length()) {
                if (str[ti1]!=str[ti2]) {
                    break;
                }
                temp+=2;
                ti1--;
                ti2++;
            }
            if (temp>max) {
                max=temp;
                j=ti1+1;
            }
        }
        for (i=j;i<j+max;i++) {
            cout<<str[i];
        }
        cout<<endl;
    }
    return 0;
}