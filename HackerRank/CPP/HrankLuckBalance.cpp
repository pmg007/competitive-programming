#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,a,b,s,q;cin>>n>>k;
    vector<int> x;s=0;
    for(int i=0;i<n;i++) {cin>>a>>b;if(b==0)s+=a; else x.push_back(a); }
    sort(x.begin(),x.end());
    if(x.size()>k) q=x.size()-k; else q=0;
    for(int i=0;i<q;i++){
        s-=x.at(i);
    }
    for(int i=q;i<x.size();i++) s+=x.at(i);
    cout<<s<<endl;
}