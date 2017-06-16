#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#define s 100005
typedef long long int lli;
using namespace std;
bool visited[s];
vector <int>v[s];
vector<lli> q;
int t,n,m;//,ans;

void initialise(){
    for(int i=0;i<s;i++) visited[i]=false;
    for(int i=0;i<s;i++) v[i].clear();
    q.clear();
    //ans=0;
}
lli dfs(int node){
    visited[node]=true;
    lli total=q[node];
    for(int i=0;i<v[node].size();i++){
        if(visited[v[node][i]]==false){
            total+=dfs(v[node].at(i));
        }
    }
    return total;
}
int main(){
    cin>>t;
    while(t--){
        initialise();
        cin>>n>>m;
        for(int i=0;i<m;i++) {
            int a,b;cin>>a>>b;a-=1;b-=1;
            v[a].push_back(b);v[b].push_back(a);
        }
        for(int i=0;i<n;i++){
            lli temp;cin>>temp;q.push_back(temp);
        }
        lli mx=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                mx=max(mx,dfs(i));
            }
        }
        cout<<mx<<endl;
    }
}

