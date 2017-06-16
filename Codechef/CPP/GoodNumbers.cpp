#ifdef _WIN32
#define gc getchar
#define pc putchar
#else
#define gc getchar_unlocked
#define pc putchar_unlocked
#endif
#include <bits/stdc++.h>
#define s 100005
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
int a[s];bool b[s];bool c[s]={false};
void Sieve(){
    c[1] = true;
    for(int i=2;i*i<s;i++)
        if(!c[i])
            for(int j=i*i;j<s;j+=i)
                c[j] = true;
    //for(int i=1;i<=10000;i++) if(!a[i]) cout<<i<<" "; cout<<endl;//false means prime
}
void free(){
    for(int i=0;i<s;i++) b[i]=true;
    for(int i=2;i*i<s;i++){
        if(b[i]){
            for(int j=i*i;j<s;j+=(i*i)) b[j]=false;
        }
    }
    for(int i=1;i<=10000;i++) if(b[i]) cout<<i<<endl;//true means free
}
int main(){
    /*int t=readInt();
    while(t--){
        int l=readInt(),r=readInt();

    }*/
    free();

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