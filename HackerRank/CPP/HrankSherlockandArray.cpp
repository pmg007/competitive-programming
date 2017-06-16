#define gc getchar_unlocked
#define pc putchar_unlocked
#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
int main(){
    lli t= readLong();
    while (t--) {
        lli n = readLong(),a[n];
        for(lli i=0;i<n;i++) a[i] =readLong();
        if(n==1) {printf("YES\n");continue;}
        lli f[n];f[0]=a[0];
        bool status=false;
        for (lli i = 1; i < n; i++) f[i]=a[i]+f[i-1];
        //for(lli i=0;i<n;i++)cout<<"dfdf"<<f[i]<<endl;
        for (lli i = 1; i < n-1; i++) {
            if(f[i-1]==(f[n-1]-f[i])) {status=true;break;}
        }
        if(status) printf("YES\n");else printf("NO\n");
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
