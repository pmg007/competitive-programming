#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    ios_base::sync_with_stdio(0);
    lli d1,d2,d3; cin>>d1>>d2>>d3;
    lli mn = min((d1+d2+d3),min((2*d1+2*d2),min((2*d2+2*d3),(2*d1+2*d3))));
    cout<<mn<<endl;
    return 0;
}