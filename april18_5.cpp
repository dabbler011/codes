#include <bits/stdc++.h>
using namespace std;

int main () {
	int t;
	cin>>t;
	while (t--) {
		int n;
		double s,y,time;
		cin>>n>>s>>y;
		time=y/s;
		int d[n],i;
		double v[n],p[n],c[n],ans=0;
		for (i=0;i<n;i++) {
			cin>>v[i];
		}
		for (i=0;i<n;i++) {
			cin>>d[i];
		}
		for (i=0;i<n;i++) {
			cin>>p[i];
		}
		for (i=0;i<n;i++) {
			cin>>c[i];
		}
		for (i=0;i<n;i++) {
			if (i!=0) {
				double dist=v[i]*ans;
				if (d[i]==1) {
					p[i]+=dist;
				} else {
					p[i]-=dist;
				}
			}
			if (p[i]>0 && d[i]==1 && p[i] - 0.000001 < c[i]) {
				ans+=(0.000001+c[i]-p[i])/v[i];
			} else if (p[i]<=0 && d[i]==1 && (abs(p[i])-0.000001)/v[i] <= time) {
				ans+=(abs(p[i])+c[i]+0.000001)/v[i];
			} else if (p[i] <= 0 && d[i]==0 && abs(p[i]) < c[i] + 0.000001) {
				ans+=(0.000001+c[i]-abs(p[i]))/v[i];
			} else if (p[i] > 0 && d[i]==0 && (p[i]-0.000001)/v[i] <= time) {
				ans+=(p[i]+c[i]+0.000001)/v[i];
			}
			ans+=time;
		}
		printf("%.6lf\n", ans);;
	}
	return 0;
}