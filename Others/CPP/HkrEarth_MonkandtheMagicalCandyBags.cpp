#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    int t;scanf("%d",&t);
    while(t--){
        int n,k;scanf("%d%d",&n,&k);priority_queue<lli>p;lli temp,total=0;
        for(int i=0;i<n;i++) {cin>>temp;p.push(temp);}
        //n=min(k,n);
        for(int i=0;i<k;i++){
            total+=p.top();lli x=p.top();p.pop();p.push((int)(x/2));
        }
        cout<<total<<endl;
    }
}