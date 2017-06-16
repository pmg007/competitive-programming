#ifdef _WIN32
#define gc getchar
#define pc putchar
#else
#define gc getchar_unlocked
#define pc putchar_unlocked
#endif

#include "iostream"
#include "cstdio"
#include "cmath"
#include "algorithm"
#include "vector"
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
int main(){
    vector<int> v;vector<int>a;
    int j=0,q=0;double temp;
    while(true){
        int n=readInt(),ans=0;
        v.clear();
        for(int i=0;i<n;i++) {int k=readInt();v.push_back(k);}
        if(j>0) for(int i=0;i<a.size();i++) v.push_back(a[i]);
        int g=readInt(),l=readInt() ;
        if(l==-1){break;}
        a.clear();
        for(int i=0;i<v.size();i++){
            temp=v[i]+((v[i]*g)/100);
            ans+=(int)temp;
            if(temp-v[i]>=l){
                a.push_back((int)temp);
            }
        }
        //q+=ans;
        printInt(ans);
        j=1;
    }
    //printInt(q);
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
