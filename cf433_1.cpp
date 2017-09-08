#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.first > b.first);
}

int main() {
	long long int n,k,i,cost=0,x=0,y=0;
	cin>>n>>k;
	long long int a[n];
	vector <pair<long long int,long long int> > vect;
	pair<long long int,long long int> temp;
	for (i=0;i<n;i++){
		cin>>a[i];
		vect.push_back(make_pair(a[i],i));
	}

	sort(vect.begin(),vect.end(),sortbysec);

	//exit(0);
	for (i = 0;i < n+y;i++){
		x=0;
		while (i+k-y<vect[i].second){
			//x++;
			vect.insert(vect.begin()+vect[i].second-k+y+1+i,vect[i]);
			y++;
			i++;
		}		
		a[vect[i].second]=i+1+k-y;
	}
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}