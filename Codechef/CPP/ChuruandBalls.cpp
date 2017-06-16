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
#include <limits.h>

#define size 10010
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
bool p[size];
//int f(int a,int b){return (b==0)?a:f(b,a%b);}
void sieve(){
    p[1]=true;
    for(int i=2;i*i<size;i++)
        if(!p[i]) for(int j=i*i;j<size;j+=i) p[j]=true;
}
int main(){
    int t=readInt();
    sieve();
    while(t--){
        int n=readInt(),a[n];int ans=INT_MAX;for(int i=1;i<=n;i++){a[i]=readInt();}
        for(int i=2;i<size-9;i++){
            if(p[i]) continue;
            int x=0,y=0;
            for(int j=1;j<=n;j++){
                if(x<a[j])x=((a[j]+i-1)/i)*i;
                y+=x-a[j];
            }
            ans=min(ans,y);
        }
        printInt(ans);
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
    //pc('\n');
    pc(' ');
}
