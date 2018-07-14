#include <bits/stdc++.h>
using namespace std;

int seive[10001];

int main () {
    int i,j;
    set <int> primes;
    for (i=2;i<=10000;i++) {
        if (seive[i]==0) {
            primes.insert(i);
            j=i*i;
            while (j<10000) {
                seive[j]=1;
                j+=i;
            }
        }
    }
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        for (auto it:primes) {
            if (primes.find(n-it)!=primes.end()) {
                cout<<it<<" "<<n-it<<endl;
                break;
            }
        }
    }
    return 0;
}