#ifdef _WIN32
#define gc getchar
#define pc putchar
#else
#define gc getchar_unlocked
#define pc putchar_unlocked
#endif

#include <bits/stdc++.h>
#define s 1000000
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
int c[s],a[s];
int main(){
    int n=readInt(),m=readInt(),temp=-1;
    for(int i=1;i<=m;i++) c[i]=readInt();
    for(int i=1;i<=n;i++) a[i]=readInt();
    for(int i=1;i<=n;i++){
        if(temp==-1){
            temp=c[a[i]];
        }else{
            int k=temp/c[a[i]];k+=1;
            q:int x=(k)*c[a[i]];
            for(int j=c[a[i]]+1;j<=m;j++){
                if(x%j==0){
                    k+=1;goto q;
                }
            }
            temp=x;
        }
    }
    printInt(temp);
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
   // pc(' ');
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