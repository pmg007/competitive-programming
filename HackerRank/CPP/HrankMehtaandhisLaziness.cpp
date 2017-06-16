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
#include <cmath>
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
int gcd(int a,int b){return (b==0)?a:gcd(b,a%b);}
int main(){
    int t=readInt();
    while(t--){
        int n=readInt(),cnt=0;
        vector<int> v;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0 && i!=n/i){
                cnt+=2;
                if(!(i&1)) v.push_back(i);
                if(!((n/i)&1)) v.push_back(n/i);
            }
            if(i*i==n){
                cnt+=1;v.push_back(i);break;
            }
        }
        if(n&1==0) {v.push_back(n);cnt+=2;}else cnt+=1;
        int num=0;
        if(v.size()>0){
            for(int i=0;i<v.size();i++){
                //cout<<v[i]<<" ";
                double temp1=sqrt(v[i]);int temp2=sqrt(v[i]);
                if(temp1==temp2) num+=1;
            }
            int n1=num/gcd(num,cnt),d1=cnt/gcd(num,cnt);
            if(n1==0) {printInt(0);goto x;}
            printf("%d/%d\n",n1,d1);
            x:;
        }else printInt(0);
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
