#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int hcf(int x, int y){return (y==0)?x:hcf(y,x%y);}
int main(){
    int t; cin>>t;
    while(t--){
        int a,b; cin>>a>>b; int gcd = hcf(a,b);cout<<"nbds"<<gcd<<endl;
        cout<<(a/gcd)*(b/gcd)<<endl;
    }
}