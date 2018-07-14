#include <bits/stdc++.h>
using namespace std;

stack <int> stck;
int chck[26];

int findj(int hash[][26],int i) {
    int j=0;
    for (j=0;j<26;j++) {
        if (hash[i][j]==1) return j;
        if (hash[i][j]==2) return -1;
    }
    return j;
}

bool rec(int hash[][26],int i) {
    int j=findj(hash,i);
    while (true) {
        if (j==-1) {
            return false;
        }
        if (j==26) {
            if (chck[i]==0)
            stck.push(i);
            chck[i]++;
            return true;
        }
        hash[i][j]=2;
        if (!rec(hash,j)) return false;
        hash[i][j]=0;
        j=findj(hash,i);
    }
}

int main () {
    int t,i,j;
    int hash[26][26];
    string str,temp;
    cin>>t;
    cin>>str;
    for (i=0;i<26;i++) {
        for (j=0;j<26;j++) {
            hash[i][j]=0;
        }
    }
    for (i=1;i<t;i++) {
        cin>>temp;
        j=0;
        while (j<str.length()) {
            if (j==temp.length()) {
                cout<<"Impossible";
                exit(0);
            }
            if (str[j]!=temp[j]) {
                hash[str[j]-'a'][temp[j]-'a']=1;
                break;
            }
            j++;
        }
        str=temp;
    }
    int alpha[26];
    for (i=0;i<26;i++) {
        if (!rec(hash,i)) {
            break;
        }
        alpha[i]=0;
    }
    if (i!=26) cout<<"Impossible";
    else {
        while (!stck.empty()) {
            alpha[stck.top()]=1;
            //cout<<stck.top()<<" ";
            cout<<(char)('a'+stck.top());
            stck.pop();
        }
    }
    return 0;
}