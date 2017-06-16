#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll a[510][510],s[510][510],p[510][510];
int main(){
    ll n,m;// cin>>n>>m;
    scanf("%lld %lld",&n,&m);
    //ll a[n+1][n+1],s[n+1][n+1],p[n+1][n+1];  // a : matrix of net berries collected  s : matrix of safety , p : matrix of the path
    for (ll i = 1; i < n+1; i++) {
        for (ll j = 1; j < n+1; j++) {
            //cin>>a[i][j];
            scanf("%lld",&a[i][j]);
            p[i][j] = LLONG_MIN;
            s[i][j] = 0;
        }
    }
    ll charmx, charmy, strength;
    for (ll i = 1; i < m+1; i++) {
        //cin>>charmx>>charmy>>strength;
        scanf("%lld %lld %lld",&charmx,&charmy,&strength);
        ll temp1 = charmx-strength, temp2 = charmx+strength, temp3=charmy-strength, temp4 = charmy+strength;
        /*for (ll j = 1; j <= n; j++) {
            for (ll k = 1; k <= n; k++) {
                if(s[j][k] == 1) continue;
                if(abs(j-charmx)+abs(k-charmy)<=strength)
                    s[j][k] = 1;
                else
                    s[j][k] = 0;
            }
        }*/
        for (ll j = temp1; j < charmx; j++) {
            if(j < 1) continue;
            for (ll k = charmy - (j - temp1); k <= charmy + j - temp1; k++) {
                if(k < 1) continue;
                if(k > n) break;
                s[j][k] = 1;
            }
        }
        for (ll j = temp3; j <= temp4; j++) {
            if (j >= 1 && j <= n) {
                s[charmx][j] = 1;
            }
        }
        for (ll j = charmx + 1; j <= temp2; j++) {
            if (j <= n) {
                for (ll k = temp3 + (j - charmx); k <= temp4 - (j - charmx); k++) {
                    if (k < 1) continue;
                    if (k > n) break;
                    s[j][k] = 1;
                }
            }
        }
    }

    //for(ll i=1;i<=n;i++) {for(ll j=1;j<=n;j++) cout<<s[i][j]<<" "; cout<<endl;}
    //cout<<"\nF\n";
    p[1][1] = a[1][1];
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= n; j++) {
            if (s[i][j] == 1 && p[i][j] != LLONG_MIN) {
                p[i+1][j] = max(p[i][j]+a[i+1][j],p[i+1][j]);
                p[i][j+1] = max(p[i][j]+a[i][j+1],p[i][j+1]);
            }
            else continue;
        }
    }
    if (p[n][n] > LLONG_MIN) {
        //cout<<"YES\n"<<p[n][n];
        printf("YES\n%lld",p[n][n]);
    }
    else //cout<<"NO\n";
        printf("NO\n");
    return 0;
}