#include "bits/stdc++.h"
typedef long long int lli;
using namespace std;
//nCr  =  (n-1)C(r-1)  +  (n-1)C(r)
int main(){
    ios_base::sync_with_stdio(0);
    lli t; cin>>t;
    while (t-- > 0) {
        lli n; cin>>n;
        lli a[n+1][n+1]; lli c=1;
        for(lli i=0;i<n+1;i++) a[i][0]=1;
        for (lli i = n-c; i >=0; c++) {
            for (lli j = 0; j <= i; j++) {
               cout<<" "; }
            for(lli j = i+1;j<n;j++)
            {a[i][j]=0;
            cout<<a[i][j];}

            cout<<"\n";
        }


        /*for (lli i = 0; i <= n; i++) {
            for (lli j = 1; j < n; j++) {

            }
        }*/
    }
}
