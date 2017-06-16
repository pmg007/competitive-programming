#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;

int hcf(int x, int y){return (y==0)?x:hcf(y,x%y);}
int main(){
    int t; cin>>t;
    while (t--) {
        int x,y; cin>>x>>y;
        cout<<hcf(x,y)<<" "<<(x*y)/hcf(x,y)<<endl;
    }
    return 0;
}