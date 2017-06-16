#include <bits/stdc++.h>
#define SIZE 200005
typedef long long ll;
ll a[SIZE],x[SIZE];
using namespace std;
int main(){
    ll n; //cin>>n;
    scanf("%lld",&n);
    for (ll i = 1; i <= n; i++) {
        //cin>>a[i];
        scanf("%lld",&a[i]);
    }
    x[0]=0;x[1]=a[1];x[2]=a[1]+a[2];
    for (ll i = 3; i <= n; i++) {
        ll p,q,r;
        p = x[i-1];
        q = a[i]+x[i-2];
        r = a[i-1]+a[i]+x[i-3];
        ll temp = max(p,max(q,r));
        x[i] = temp;
        //cout<<x[i]<<" ";
    }
    //cout<<endl;
    //cout<<x[n];
    printf("%lld",x[n]);
    return 0;
}
