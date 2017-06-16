#include <bits/stdc++.h>
#define SIZE 200005
typedef long long ll;
ll a[SIZE],x[SIZE][3];
using namespace std;
int main(){
    ll n,s=0; //cin>>n;//a[0]=0;
    scanf("%lld",&n);
    for (ll i = 1; i <= n; i++) {
        //cin>>a[i];
        scanf("%lld",&a[i]);
        s+=a[i];
    }
    x[n][0] = s;
    x[n][2] = s;
    x[n][1] = s-a[n];
    for (ll i = n - 1; i >= 1; i--) {
        x[i][0] = min(x[i+1][0],min(x[i+1][1],x[i+1][2]));
        x[i][1] = x[i+1][0]-a[i];
        x[i][2] = x[i+1][1]-a[i];
    }
    ll ans = min(x[1][0],min(x[1][1],x[1][2]));
    //cout<<ans;
    printf("%lld",ans);
    return 0;
}
