#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n,x,d=0,dp=0,mxl=0,mxp=0,tml=0,tmp=0,cnt=0;
    //cin>>n;
    scanf("%lld",&n);
    for (ll i = 0; i < n; i++) {
        //cin>>x;
        scanf("%lld",&x);
        if (x == 1) {
            cnt+=1;
            if (cnt > d) {
                d = cnt;
                dp = i;
            }
            if (cnt > 1) {
                tml+=1;
            }
            else{
                tml = 0;
                tmp = i;
            }
        }
        else {
            cnt-=1;
            if (cnt > 0) {
                tml+=1;
            }
            else {
                if (tml > mxl) {
                    mxl = tml;
                    mxp = tmp;
                }
                tml=0;tmp=0;
            }
        }
    }
    //cout<<d<<" "<<dp+1<<" "<<mxl+2<<" "<<mxp+1;
    printf("%lld %lld %lld %lld",d,dp+1,mxl+2,mxp+1);
    return 0;
}