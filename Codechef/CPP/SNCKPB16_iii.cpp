//FAIRPAIR
#ifdef _WIN32
#define gc getchar
#define pc putchar
#else
#define gc getchar_unlocked
#define pc putchar_unlocked
#endif

#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
int main(){
    int testcases=readInt();
    while(testcases--){
        int n=readInt(),s[n],t[n];
        for(int i=0;i<n;i++) s[i]=readInt();
        for(int i=0;i<n;i++) a[i]=readInt();

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
    pc('\n');
    //pc(' ');
}

