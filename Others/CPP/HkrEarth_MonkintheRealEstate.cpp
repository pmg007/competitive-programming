#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#define s 100005
typedef long long int lli;
using namespace std;
//bool v[s];
int main(){
    int t;cin>>t;
    while(t--){
        lli ans=0;
        bool v[s];
        for(int i=0;i<s;i++) v[i]=false;
        int e;cin>>e;
        int x,y;
        for(int i=0;i<e;i++){
            cin>>x>>y;
            v[x]=true;v[y]=true;
        }
        for(int i=0;i<s;i++) if(v[i])ans+=1;
        cout<<ans<<endl;
    }
}

