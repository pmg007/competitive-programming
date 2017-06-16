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
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
inline void readString(char *str);

int main(){
    int a = readInt(),b=readInt(),c=readInt(),d=readInt(),e=readInt(),f=readInt();
    int q[3];q[0] = a+b+f,q[1]=a+b+c+d,q[2]=a+e+d;//q[3]=q[1],q[4]=q[2];q[5]=q[1],q[6]=q[0],q[7]=q[1],q[8]=q[2];
    int ans = min(q[0],min(q[1],q[2]));
    if(ans<0) printInt((-1)*ans); else printInt(0);
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
inline void readString(char *str){
    char c = 0; int i = 0;
    while (c < 33)
        c = gc();
    while (c != '\n') {
        str[i] = c; c = gc(); i = i + 1;
    }
    str[i] = '\0';
}