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
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
double converthm(int h,int m){
    if (h==12) h=0;
    if (m==60) m=0;
    double ha = 0.5 * (h*60 + m);
    double ma = 6*m;
    double a = abs(ha - ma);
    return a;
}
double converths(int h,int s,int m){
    if (h==12) h=0;
    if (s==60) {s=0;m+=1;}
    double ha = 0.5 * (h*60 + m);
    double sa = 6*s;
    double a = abs(ha - sa);
    return a;
}
double convertms(int m,int s){
    if (m==60) m=0;
    if (s==60) {s=0;m+=1;}
    double ma = 6*m;
    double sa = 6*s;
    double a = abs(ma - sa);
    return a;
}
int main(){
    int t =readInt();
    while(t--){
        int n=readInt();
        double ans=0;int k=0;
        for(int i=1;i<=n;i++){
            string str;cin>>str;
            int h=(str[0]-'0')*10+(str[1]-'0');
            int m=(str[3]-'0')*10+(str[4]-'0');
            int s=(str[6]-'0')*10+(str[7]-'0');
            //cout<<"h="<<h<<"m="<<m<<"s="<<s;
            double x=converthm(h,m),y=converths(h,s,m),z=convertms(m,s);
            //cout<<"    x="<<x<<"y="<<y<<"z="<<z;
            double temp=(x+y+z)/3;//cout<<"    temp="<<temp<<endl;
            if(temp>ans){
                ans=temp;
                k=i;
            }
        }
        cout<<k<<endl;
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
