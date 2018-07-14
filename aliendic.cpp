#include<bits/stdc++.h>
using namespace std;
string printOrder(string [], int , int );
string order;


int findj(int hash[][26],int i) {
    int j=0;
    for (j=0;j<26;j++) {
        if (hash[i][j]==1) return j;
        if (hash[i][j]==2) return -1;
    }
    return j;
}

bool rec(int hash[][26],int i,stack <int> &stck,int chck[]) {
    int j=findj(hash,i);
    while (true) {
        if (j==-1) {
            return false;
        }
        if (j==26) {
            if (chck[i]==0)
            stck.push(i);
            chck[i]=1;
            return true;
        }
        hash[i][j]=2;
        if (!rec(hash,j,stck,chck)) return false;
        hash[i][j]=0;
        j=findj(hash,i);
    }
}



string printOrder(string dict[], int N, int k)
{
   int t,i,j;
   stack <int> stck;
    int chck[26];
    int hash[26][26];
    string str,temp;
    t=N;
    str=dict[0];
    for (i=0;i<26;i++) {
        for (j=0;j<26;j++) {
            hash[i][j]=0;
        }
    }
    for (i=1;i<t;i++) {
        temp=dict[i];
        j=0;
        while (j<str.length()) {
            if (str[j]!=temp[j]) {
                hash[str[j]-'a'][temp[j]-'a']=1;
                break;
            }
            j++;
        }
        str=temp;
    }
    for (i=0;i<k;i++) {
        rec(hash,i,stck,chck);
    }
    string ans="";
    while (!stck.empty()) {
        //cout<<stck.top()<<" ";
        ans+=('a'+stck.top());
        stck.pop();
    }
    cout<<ans;
    return ans;
}

bool f(string a,string b)
{
	int p1=0;int p2=0;
	for(int i=0;i<min(a.size(),b.size()) and p1 ==p2;i++ )
	{
		p1 = order.find(a[i]);
		p2 = order.find(b[i]);
	//	cout<<p1<<" "<<p2<<endl;
	}
	
	if(p1 == p2 and a.size()!=b.size())
	return a.size()<b.size();
	
	return p1<p2;
}
	
// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
    string s[n];
    for(int i=0;i<n;i++)cin>>s[i];
    
        string ss = printOrder(s,n,k);
        order="";
        for(int i=0;i<ss.size();i++)
        order+=ss[i];
        
        string temp[n];
        std::copy(s, s + n, temp);
        sort(temp,temp+n,f);
        
        bool f= true;
        for(int i=0;i<n;i++)
        if(s[i]!=temp[i])f=false;
        cout<<f;
        cout<<endl;
        
    }
	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
/*The function should return a string denoting the 
order of the words in the Alien Dictionary */