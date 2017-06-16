#ifdef _WIN32
#define gc getchar
#define pc putchar
#else
#define gc getchar_unlocked
#define pc putchar_unlocked
#endif

#include <iostream>
#include <vector>
#include <cstdio>
#include <queue>
#include <list>
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
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
    int t=readInt();
    while(t--){
        int n=readInt(),m=readInt();
        vector<list<int>> adj(n);
        for(int i=0;i<m;i++){
            int x=readInt(),y=readInt();x-=1;y-=1;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int start=readInt();start-=1;
        int p[n],l[n];
        bool v[n];for(int i=0;i<n;i++) v[i]=false;
        for(int i=0;i<n;i++){
            p[i]=0;l[i]=-1;
        }
        //cout<<"fuck";
        bfs(adj,p,l,v,start);
        for(int i=0;i<n;i++){
            if(i!=start){
                if(v[i]){
                    printInt(l[i]*6);
                }else{
                    printInt(-1);
                }
            }
        }
        pc('\n');
    }
}

inline int readInt(){
    int n=0; int ch=gc(); int sign=1;
    while( ch < '0' || ch > '9' ){
        if(ch=='-')sign=-1; ch=gc();
    }
    while(  ch >= '0' && ch <= '9' )
        n = (n<<3)+(n<<1) + ch-'0', ch=gc();
    return n*sign;
}
inline void printInt(int a) {
    char snum[20]; int i=0;
    if(a<0) {pc('-'); a=-a;}
    do {
        snum[i++]=a%10+48; a=a/10;
    }
    while(a!=0);
    i=i-1;
    while(i>=0)
        pc(snum[i--]);
    //pc('\n');
    pc(' ');
}
inline lli readLong(){
    lli n=0; lli ch=gc();int sign=1;
    while( ch < '0' || ch > '9' ){
        if(ch=='-')sign=-1; ch=gc();
    }
    while(  ch >= '0' && ch <= '9' )
        n = (n<<3)+(n<<1) + ch-'0', ch=gc();
    return n*sign;
}
inline void printLong(lli a) {
    char snum[50]; lli i=0;
    if(a<0) {pc('-'); a=-a;}
    do {
        snum[i++]=a%10+48; a=a/10;
    }
    while(a!=0);
    i=i-1;
    while(i>=0)
        pc(snum[i--]);
    //pc('\n');
    pc(' ');
}
