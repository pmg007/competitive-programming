#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli a[200005]={0},BIT[200005]={0};int flag[200005]={0};
bool check(lli n){
    string s=to_string(n);
    return s[0]==s.back() && n>=0;
}
void update(int x,lli val,int n){
    for(;x<=n;x+=x&-x){
        BIT[x]+=val;
    }
}
int query(int x){
    int total=0;
    for(;x>0;x-=x&-x){
        total+=BIT[x];
    }
    return total;
}

int main(){
    int n,q;scanf("%d %d",&n,&q);
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
        if(check(a[i])){
            flag[i]=1;
            update(i,flag[i],n);
        }else flag[i]=0;

    }
    while(q--){
        lli t,f,s,ans=0;scanf("%lld %lld %lld",&t,&f,&s);
        if(t==1) {
            ans=query(s)-query(f-1);printf("%lld\n",ans);
        }else {
            if(check(s)){
                if(!flag[f]){
                    update(f,1,n);
                    flag[f]=1;
                }
            }else{
                if(flag[f]) {
                    update(f,-1,n);
                    flag[f]=0;
                }
            }
        }

    }
}

