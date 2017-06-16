#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll mod9(ll x){
    return (x%9==0)?9:(x%9);
}
int main(){
    ll t; scanf("%lld",&t);
    while (t-- > 0) {
        ll a,d,l,r,ans=0; scanf("%lld %lld %lld %lld",&a,&d,&l,&r);
        a = mod9(a); d = mod9(d);
        for (ll i = 0; i < 9; i++) {
            ans += mod9(a+i*d);
            //cout<<"ans1:"<<ans<<endl;
        }
        //cout<<endl;
        ll temp1 = (r-l+1)/9;
        ll temp2 = (r-l+1)%9; //cout<<temp2<<endl;
        ans=temp1*ans;
        for (ll i = 0; i < temp2; i++) {
            ans += mod9(a+(r-1-i)*d);
            //cout<<"ans2:"<<ans<<endl;
        }
        //cout<<ans<<endl;
        printf("%lld\n",ans);
    }
    return 0;
}