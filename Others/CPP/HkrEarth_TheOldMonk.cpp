#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n,k=0;scanf("%d",&n);
        vector<lli>a,b,c,d;
        for(int i=0;i<n;i++){lli temp;scanf("%lld",&temp);a.push_back(temp);}
        for(int i=0;i<n;i++){lli temp;scanf("%lld",&temp);b.push_back(temp);d.push_back(temp);}
        for(int i=0;i<n;i++){
            int l=0,h=n-1,m;
            int p=-1;
            while(l<=h){
                m=(l+h)/2;
                if(b[m]>=a[i]){p=m;l=m+1;}else h=m-1;
            }
            k=max(k,p-i);
        }

        printf("%d\n",k);
    }
}