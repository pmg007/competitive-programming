#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    int t;scanf("%d",&t);
    pair<int,string> p[t];
    for(int i=0;i<t;i++){
        cin>>p[i].second>>p[i].first;p[i].first=-p[i].first;
    }
    sort(p,p+t);
    for(int i=0;i<t;i++){cout<<p[i].second<<" "<<p[i].first*(-1)<<endl;}
}



