#include<iostream>

#include<iomanip>
#include <algorithm>
#include <climits>

using namespace std;
typedef long long int lli;
int main() {
    /* lli n,pos1=-1,pos2=-1,pos;cin>>n;lli k;cin>>k;int a[n],b[n];
    lli mini1=LLONG_MAX,mini2=LLONG_MAX,temp=LLONG_MIN,temp1=LLONG_MIN,mini;
    pair<lli,lli> p[n];
    for(int i=0;i<n;i++) {cin>>a[i];p[i].second=a[i];}
    for(int i=0;i<n;i++) {cin>>b[i];p[i].first=b[i];}
    sort(p,p+n);
    for(int i=0;i<n;i++){
        if(mini1>=((p[i].second-k*2)*p[i].first)){
            if(temp<=p[i].first*p[i].second){
                mini1=(p[i].second-k*2)*p[i].first;
                pos1=i;temp=p[i].first*p[i].second;
            }
            //mini1=(p[i].second-k*2)*p[i].first;
            //pos1=i;
        }
        if(mini2>=((p[i].second+k*2)*p[i].first)){
            if(temp1<=p[i].first*p[i].second){
                mini2=(p[i].second+k*2)*p[i].first;
                pos2=i;temp1=p[i].first*p[i].second;
            }
            //mini2=(p[i].second+k*2)*p[i].first;
            //pos2=i;
        }
    }
    //cout<<"mini1="<<mini1<<" pos1="<<pos1<<endl<<" mini2="<<mini2<<endl<<" pos2="<<pos2<<endl;
    //if(mini1<mini2) {mini=mini1;pos=pos1;}
    //else if(mini1>mini2){mini=mini2;pos=pos2;}
    //else{pos=max(pos1,pos2);}
    lli tsum=0,tsum1=0,tsum2=0;
    for(int i=0;i<n;i++){
        if(i==pos1)tsum1+=mini1;else tsum1+=(p[i].first*p[i].second);
         if(i==pos2)tsum2+=mini2; else tsum2+=(p[i].first*p[i].second);
        //cout<<tsum<<" ";
    }
    cout<<min(tsum1,tsum2)<<"\n";
}*/
    lli n,k;cin>>n>>k;
    lli a[n],b[n],c[n],t=0;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    for(int i=0;i<n;i++) {c[i]=a[i]*b[i];t+=c[i];}
    vector<lli> v;
    for(int i=0;i<n;i++){
        lli temp1=(a[i]-k*2)*b[i];
        lli temp2=(a[i]+k*2)*b[i];
        v.push_back(t-c[i]+temp1);
        v.push_back(t-c[i]+temp2);
    }
    sort(v.begin(),v.end());
    cout<<v[0]<<"\n";
}

