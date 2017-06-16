#ifdef _WIN32
#define gc getchar
#define pc putchar
#else
#define gc getchar_unlocked
#define pc putchar_unlocked
#endif
#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;
inline int readInt();
inline void printInt(int a);
inline lli readLong();
inline void printLong(lli a);
int main(){
    int t=readInt();
    while (t--) {
        lli fuck[3];
        lli kk,b=-1;
        fuck[0]=readLong();fuck[1]=readLong();fuck[2]=readLong();kk=readLong();
        sort(fuck,fuck+3);
        if(kk<=fuck[1]+1 && kk>fuck[0]+1){
            printLong(2*kk-1+fuck[0]);
        }else if(kk>fuck[1]+1){
            printLong(fuck[0]+fuck[1]+kk);
        }else if(kk<=fuck[0]+1){
            printLong(kk*3-2);
        }
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
