#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k,temp=0;cin>>n>>k;int a[100005];
        if(k==0){for(int i=1;i<=n;i++)cout<<i<<" ";cout<<endl;continue;}
        if(n%k!=0 || (n/k)%2!=0) {cout<<"-1"<<endl; continue;}
        for(int i=1;i<=n;i++){
            temp+=1; if(temp<=k) a[i]=k+i; else a[i]=i-k;
            if(temp==k*2) temp=0;
        }
        for(int i=1;i<=n;i++)cout<<a[i]<<" ";cout<<"\n";
    }
}