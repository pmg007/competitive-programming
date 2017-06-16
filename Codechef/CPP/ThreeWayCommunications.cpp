#include "bits/stdc++.h"
using namespace std;
typedef long long int lli;
int main(){
    ios_base::sync_with_stdio(0);
    lli t; cin>>t;
    while (t-- > 0) {
        lli x; cin>>x; x=x*x;
        lli x1,x2,x3,y1,y2,y3,a2b,b2c,a2c; cin>>x1>>y1>>x2>>y2>>x3>>y3;
        a2b = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
        b2c = (x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
        a2c = (x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
        if(a2b<=x && a2c<=x) {cout<<"yes"<<endl; continue;}
        if(a2c<=x && b2c<=x) {cout<<"yes"<<endl; continue;}
        if(a2b<=x && b2c<=x) {cout<<"yes"<<endl; continue;}
        cout<<"no"<<endl;
    }
    return 0;
}