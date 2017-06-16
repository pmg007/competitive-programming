#define gc getchar_unlocked
#define pc putchar_unlocked
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

vector <int> adj[10];
bool visited[10];
void initialise(){
    for(int i=0;i<10;i++) visited[i]=false;
}
void dfs(int s){
    /*visited[s]=true;
    for(int i=0;i<adj[s].size();i++){
        if(!visited[adj[s][i]]){
            dfs(adj[s][i]);
        }
    }*/     //below is the STL implementation for the same
    visited[s]=true;
    for_each(adj[s].begin(),adj[s].end(),dfs);
}
//main function
int main(){
    int nodes,edges,x,y,conncomp=0;
    nodes = readInt(); edges = readInt();
    for(int i=0;i<edges;i++){
        x = readInt(), y = readInt();
        adj[x].push_back(y);    //edge from vertex x to y
        adj[y].push_back(x);    //edge from vertex y to x
    }
    initialise();    //initialising all nodes as not visited
    for(int i=1;i<=nodes;i++){
        if(!visited[i]){
            dfs(i);
            conncomp+=1;    //counter for calculating the number of connected components
        }
    }
    printf("number of connected components: %d",conncomp);
    return 0;
}

//IO functinos
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
