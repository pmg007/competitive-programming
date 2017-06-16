#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n,x,pos=0,j=0;bool flag=false; scanf("%d %d",&n,&x);lli a[n],s=0;
        for(int i=0;i<n;i++) scanf("%lld",&a[i]);
        for(;j<=n;){
            if(s==x) {flag= true;break;}
            else{
                if(s<x) {
                    s+=a[j];j++;
                }
                else{
                    while(s>x && pos<j){
                        s-=a[pos];pos++;
                    }
                }
            }
        }
        if(flag) printf("YES\n");else printf("NO\n");
    }
}