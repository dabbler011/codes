#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector <pair<int,int>> vec;
        int i;
        for (i=0;i<n;i++) {
            int temp;
            cin>>temp;
            vec.push_back(make_pair(temp,0));
        }
        for (i=0;i<n;i++) {
            int temp;
            cin>>temp;
            vec[i].second=temp;
        }
        sort(vec.begin(),vec.end());
        priority_queue <int,vector<int>,greater<int>> pq;
        i=0;
        int tim,ans=0;
        while (i!=vec.size()) {
            tim=vec[i].first;
            while (!pq.empty()) {
                if (pq.top() > tim) break;
                pq.pop();
            }
            while(vec[i].first==tim) {
                if (vec[i].second<vec[i].first) vec[i].second+=2359;
                pq.push(vec[i].second);
                i++;
            }
            ans=max(ans,(int)pq.size());
        }
        cout<<ans<<endl;
    }
    return 0;
}