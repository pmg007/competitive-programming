#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n,k; scanf("%lld %lld",&n,&k); long long a[n],cnt=0;k-=1;
    vector<ll> V;
    for (ll i = 0; i < n; i++) {
        scanf("%lld",&a[i]);
        if (a[i] <= k) {
            V.push_back(a[i]);
        }
    }
    sort(V.begin(),V.end());
    //ll vs = V.size();
    ll j = V.size()-1;
    for (ll i = 0; i < j;) {
        if (V[i] + V[j] <= k) {
            cnt+=(j-i);
            i++;
            //j--;
        }
        else j--;
    }
    cout<<cnt;
    return 0;
}