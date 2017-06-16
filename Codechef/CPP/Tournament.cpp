#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n,ans=0; scanf("%lld",&n); ll a;
    vector<ll> V;
    for (ll i = 0; i < n; i++) {
        scanf("%lld",&a);
        V.push_back(a);
    }
    /*for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            //cout<<abs(a[i]-a[j])<<endl;
            ans+=abs(a[i]-a[j]);
        }
    }*/
    sort(V.rbegin(),V.rend());
    for (ll i = 0; i < n-1; i++) {
        ans+=(V[i]*(n-i-1));
    }
    for (ll i = 0; i < n; i++) {
        ans-=(V[i]*i);
    }
    printf("%lld\n",ans);
    return 0;
}