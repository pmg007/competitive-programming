#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    ll n; scanf("%lld",&n);ll a[n];
    for (ll i = 0; i < n; i++) {
        scanf("%lld",&a[i]);
    }
    sort(a,a+n); ll max=-1,temp;
    for (ll i = 0; i < n; i++) {
        temp = a[i]*(n-i);
        if(temp>max) max = temp;
    }
    printf("%lld\n",max);
    return 0;
}