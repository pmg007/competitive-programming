s#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
typedef long long int lli;
const int mod=1e9+7;
const int mx=100010;
lli solve(lli a,lli b,lli c){
    lli x=1,y=a;
    while(b>0){
        if(b&1)x=(x*y)%c;
        y=(y*y)%c;
        b>>=1;
    }
    return x%c;
}
lli a[mx],b[mx];
int main(){
    int t;scanf("%d",&t);
    lli f=1;
    b[0]=solve(1,mod-2,mod);
    for(int i=1;i<100001;i++){
        f=(f*i)%mod;
        b[i]=solve(f,mod-2,mod);
    }
    while(t--){
        int n,x;lli m;scanf("%d %d %lld",&n,&x,&m);
        for(int i=1;i<=n;i++) {
            scanf("%lld",&a[i]);
            a[i]%=mod;
        }
        m%=mod;
        lli ans=0;
        lli num =1,j=0;
        for(int i=x;i>=1;i--){
            ans = (ans + ( (((num*a[i])%mod) * b[j])%mod )) %mod;
            num = (num * (m+j)%mod) %mod;
            j++;
        }
        printf("%lld\n",ans);
    }
}