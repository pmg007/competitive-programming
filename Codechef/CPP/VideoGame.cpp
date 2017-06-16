#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n,h; scanf("%lld %lld",&n,&h);int a[n];
    for (ll i = 0; i < n; i++) {
        scanf("%lld",&a[i]);
    }
    ll x; scanf("%lld",&x); ll current=0,crane=0;
    while (x != 0) {
        if (x == 1 && current!=0) {
            current-=1;
        }
        else if (x == 2 && current != n - 1) {
            current+=1;
        }
        else if (x == 3) {
            if (a[current] > 0 && crane==0) {
                a[current] -= 1;
                crane=1;
            }
        }
        else if (x == 4) {
            if (a[current] < h && crane==1) {
                a[current] += 1;
                crane=0;
            }
        }
        scanf("%lld",&x);
    }
    for (ll i = 0; i < n; i++) {
       cout<<a[i]<<" ";
    }
    return 0;
}