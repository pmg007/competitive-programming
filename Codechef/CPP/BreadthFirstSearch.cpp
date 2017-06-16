#include <iostream>
#include <cstdio>
#include <vector>
#include <list>
#include <queue>
using namespace std;

void bfs(vector<list<int>> adj,int p[],int l[],bool v[],int start){
    list<int>::iterator it;
    int lev=0;l[start]=lev;
    queue<int> q;
    q.push(start);
    v[start]=true;
    while(!q.empty()){
        int nv=q.front();
        it=adj[nv].begin();
        while(it!=adj[nv].end()){
            if(l[*it]==-1 && !v[*it]){
                p[*it]=nv;
                l[*it]=l[p[*it]]+1;
                q.push(*it);
                v[*it]=true;
            }
            ++it;
        }
        q.pop();
        lev+=1;
    }
}

int main(){
    int nodes,edges,x,y;cin>>nodes>>edges;
    vector<list<int>> adj(nodes);
    for(int i=0;i<edges;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
   cout<<"Adjacency list:\n";
    for(int i=0;i<edges;i++){
        list<int>::iterator it;
        for(it=adj[i].begin();it!=adj[i].end();++it){
            cout<<*it<<" ";
        }
        cout<<"\n";
    }
    int p[nodes],l[nodes];
    bool v[nodes];
    for(int i=0;i<nodes;i++){
        p[i]=0;l[i]=-1;
    }
    int start;cin>>start;
    bfs(adj,p,l,v,start);
    for(int i=0;i<nodes;i++){
        cout<<i<<" "<<l[i]<<" "<<p[i]<<"\n";
    }
    return 0;
}