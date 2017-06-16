#define gc getchar_unlocked
#define pc putchar_unlocked
#define siz 100010
#include "climits"
#include "iostream"
#include "cstdio"
#include "algorithm"
#include "vector"
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
vector<int> adj[siz];
bool visited[siz];
int strength[siz],S[siz],total;
void initialise(){
    for(int i=0;i<siz;i++) visited[i]=false;
}
int dfs(int s){
    int r=0;
    visited[s]=true;
    for(int i=0;i<adj[s].size();i++){
        if(!visited[adj[s][i]]) r+=dfs(adj[s][i]);
    }
    return S[s]=strength[s]+r;
}
int main(){
    int nodes = readInt(),edges=nodes-1;total=0;
    for(int i=1;i<=nodes;i++) {
        strength[i] = readInt();
        total+=strength[i];
    }
    for(int i=0;i<edges;i++){
        int x = readInt(),y=readInt();
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    initialise();
    dfs(1);
    int ans = INT_MAX;
    for(int i=1;i<=nodes;i++){
        if(abs(total-2*S[i])<ans) ans = abs(total-2*S[i]);
    }
    printInt(ans);
    return 0;
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
    pc('\n');
    //pc(' ');
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
    pc('\n');
    //pc(' ');
}
