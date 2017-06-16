#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n,x,y,t1,t2; scanf("%lld %lld %lld",&n,&x,&y);
    pair<ll,ll> P[n]; vector<ll> stime,etime;
    for (ll i = 0; i < n; i++) {
        scanf("%lld %lld",&P[i].second,&P[i].first);
        //cin>>P[i].second>>P[i].first;
    }
    for (ll i = 0; i < x; i++) {
        ll a;//cin>>a;
        scanf("%lld",&a);
        stime.push_back(a);
    }
    for (ll i = 0; i < y; i++) {
        ll b; //cin>>b;
        scanf("%lld",&b);
        etime.push_back(b);
    }
    sort(P,P+n); sort(stime.begin(),stime.end()); sort(etime.begin(),etime.end());
    ll temp1,temp2;
    vector<ll> temp;
    for (ll i = 0; i < n; i++) {
        //cout<<"f";
        vector<ll>::iterator it1,it2;


        it1 = upper_bound(stime.begin(),stime.end(),P[i].second);
        if (it1 != stime.end()) {
            if (it1 == stime.begin()) {
                continue;
            }
            else
                temp1 = stime[it1-stime.begin()-1];
        }
        else temp1 = stime.back();


        it2 = upper_bound(etime.begin(),etime.end(),P[i].first);
        if (it2 != etime.end()) {
            if (it2 == etime.begin()) {
                temp2 = etime[0];
                goto q;
            }
            else if (etime[it2 - etime.begin() - 1] == P[i].first) temp2 = P[i].first;
            else temp2 = *it2;
        }
        else{
            if(etime.back()==P[i].first) temp2 = etime.back();
            else continue;
        }
        q:;
        //cout<<"temp1="<<temp1;
        //cout<<"  temp2="<<temp2<<endl;
        temp.push_back(temp2-temp1);
    }
    sort(temp.begin(),temp.end());
    //cout<<temp[0]+1;
    printf("%lld",temp[0]+1);
    return 0;
}