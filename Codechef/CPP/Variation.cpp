#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main(){
    lli n,k; scanf("%lld %lld",&n,&k);
    //cin>>n>>k;
    lli a[n];
    for (lli i = 0; i < n; i++) {
        scanf("%lld",&a[i]);
        //cin>>a[i];
    }
    sort(a,a+n);
    lli j = 1,cnt=0;
    for (lli i = 0; i < j && i <= n - 2;) {
        if (abs(a[i] - a[j]) >= k) {
            cnt+=(n-j);
            //cout<<"f<<"<<cnt;
            i++;
            if(i==j) j++;
        }
        else j++;
    }
    //cout<<"ans\n";
    cout<<cnt;
    return 0;
}