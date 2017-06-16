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
        lli r=readLong(),c=readLong(),m=readLong(),k=readLong(),j=readLong();
        lli m1,m2,m3,s=0;
        s=m+k+j;
        m1=max(m,max(k,j));m2=min(m,min(k,j));
        m3=s-m1-m2;
        m=m1;k=m3;j=m2;
        if(m+k+j!=r*c) {printf("No\n");continue;}
        else{
            if(m%r==0){
                lli temp=m/r;
                if(k%r==0 ||j%r==0 ||k%(c-temp)==0 ||j%(c-temp)==0 ) {printf("Yes\n");continue;}
            } if(m%c==0){
                lli temp=m/c;
                if(k%c==0 ||j%c==0 ||k%(r-temp)==0 ||j%(r-temp)==0 ) {printf("Yes\n");continue;}
            }if(k%r==0){
                lli temp=k/r;
                if(m%r==0 ||j%r==0 ||m%(c-temp)==0 ||j%(c-temp)==0 ) {printf("Yes\n");continue;}
            } if(k%c==0){
                lli temp=k/c;
                if(m%c==0 ||j%c==0 ||m%(r-temp)==0 ||j%(r-temp)==0 ) {printf("Yes\n");continue;}
            } if(j%r==0){
                lli temp=j/r;
                if(k%r==0 ||m%r==0 ||k%(c-temp)==0 ||m%(c-temp)==0 ) {printf("Yes\n");continue;}
            } if(j%c==0){
                lli temp=j/c;
                if(k%c==0 ||m%c==0 ||k%(r-temp)==0 ||m%(r-temp)==0 ) {printf("Yes\n");continue;}
            } printf("No\n");
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
    pc('\n');
    //pc(' ');
}

