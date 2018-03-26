#include <bits/stdc++.h>
using namespace std;

int r[50],c[50],flag=1;
string str[50];
int n,m;

void check_row(int,int);

void check_col(int no,int p) {
	int i;
	if(c[no]==-1) {
		c[no]=p;
		for (i = 0;i < n;i++) {
			if (str[i][no] == '#') {
				check_row(i,p);
			} else if (r[i]==p) flag =0;
		}
	} else if(c[no]!=p){
		flag=0;
	}
}

void check_row(int no,int p) {
	string row = str[no];
	int i;
		if(r[no]==-1) {
			r[no]=p;
			for (i=0;row[i]!='\0';i++) {
				if(row[i]=='#') {
					check_col(i,p);
				}else if (c[i]==p) flag =0;
			}
		} else if (no !=p && r[no] != p) {
			flag=0;
		}
}

int main() {
	int i,j;
	cin>>n>>m;
	for(i=0;i<50;i++) {
		r[i]=-1;
		c[i]=-1;
	}
	for (i = 0;i < n;i++) {
		cin>>str[i];
	}
	for (i = 0;i < n;i++) {
		check_row(i,i);
	}
	if(flag==1){
		cout<<"Yes";
	} else {
		cout<<"No";
	}
	return 0;
}