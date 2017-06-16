#include<bits/stdc++.h>
typedef long long int lli;
using namespace std;
int main(){
    int m,n;cin>>n>>m;
    lli mx=(long long)(n-m+1)*(n-m)/2;
    int z=n/m,y=n%m;
    lli mn=(long long)m*(z-1)*(z)/2+(long long)z*y;
    cout<<mn<<' '<<mx<<'\n';
    return 0;
}