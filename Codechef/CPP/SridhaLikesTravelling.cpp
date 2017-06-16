#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    int t; cin>>t;
    while (t--) {
        int n,cost=0; cin>>n;
        pair<pair<string,string>,int> P[n];
        for (int i = 0; i < n; i++) {
            cin>>P[i].first.first>>P[i].first.second>>P[i].second;
            cost += P[i].second;
        }

    }
    return 0;
}