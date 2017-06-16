#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int a[100010],n,k;
bool test(int x,int k){
    int s=0;s=a[0]+x;k--;
    for(int i=1;i<n;i++){
        if(s+x>=a[i])continue;
        if(k==0) return false;
        s=a[i]+x;k--;
    }
    return true;
}
int main(){
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    sort(a,a+n);
    int l=0,h=a[n-1],mid;
    while(l<=h){
        mid=(l+h)/2;
        if(test(mid,k) && test(mid-1,k)==0)break;
        if(!test(mid,k)){
            l=mid+1;
        }else h=mid-1;
    }
    printf("%d\n",mid);
}
