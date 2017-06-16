#include <bits/stdc++.h>
#define SIZE 1000005
typedef long long ll;
using namespace std;
ll a[SIZE],x[SIZE];
int main(){
    ll n,ans1,ans2,fans; scanf("%lld",&n);
    for (ll i = 1; i <= n; i++) {
        scanf("%lld",&a[i]);
    }
    x[n-2] = a[n-2];
    x[n-1] = a[n-1];
    for (ll i = n - 3; i >= 1; i--) {
        x[i] = a[i] + min(x[i+1],x[i+2]);
    }
    ans1 = a[n] + min(x[1],x[2]);
    x[n-1] = a[n-1];
    x[n] = a[n];
    for (ll i = n - 2; i >= 1; i--) {
        x[i] = a[i] + min(x[i+1],x[i+2]);
    }
    ans2 = x[1];
    fans = min(ans1,ans2);
    //cout<<fans;
    printf("%lld",fans);
    return 0;
}