//MMPROD
#ifdef _WIN32
#define gc getchar
#define pc putchar
#else
#define gc getchar_unlocked
#define pc putchar_unlocked
#endif

#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
int main(){
    int testcases=readInt();
    while(testcases--){
        lli n=readLong(),k=readLong(),ar[n],sol=1;
        lli f=0,r=n-1,count=0;
        for(int i=0;i<n;i++) ar[i]=readLong();
        sort(ar,ar+n);
        //for(int i=0;i<n;i++) cout<<ar[i]<<" ";cout<<endl;
        if(ar[0]<0 && ar[n-1]>=0){
            if(k%2==0){
                while(count<k){
                    if((ar[r]*ar[r-1])>=(ar[f]*ar[f+1])){
                        //sol*=(ar[r]*ar[r-1]);
                        sol=((sol%mod)*((ar[r]%mod)*(ar[r-1]%mod)%mod))%mod;
                        r-=2;count+=2;
                        //cout<<"fuck:"<<sol;
                    }else{
                        //sol*=(ar[f]*ar[f+1]);
                        sol=((sol%mod)*((ar[f]%mod)*(ar[f+1]%mod)%mod))%mod;
                        f+=2;count+=2;
                        //cout<<"fuck:"<<sol;
                    }
                }
            }else {
                    sol=ar[n-1];r=n-2;
                    while(count<k-1){
                    if((ar[r]*ar[r-1])>=(ar[f]*ar[f+1])){
                        //sol*=(ar[r]*ar[r-1]);
                        sol=((sol%mod)*((ar[r]%mod)*(ar[r-1]%mod)%mod))%mod;
                        r-=2;count+=2;
                    }else{
                        //sol*=(ar[f]*ar[f+1]);
                        sol=((sol%mod)*((ar[f]%mod)*(ar[f+1]%mod)%mod))%mod;
                        f+=2;count+=2;
                    }
                }
            }
        }else if(ar[n-1]<0){
            if(k%2==0){
                for(int i=0;i<k;i++){
                    sol=((sol%mod)*(ar[i]%mod))%mod;
                }
            }else{
                for(int i=0;i<k;i++){
                    sol=((sol%mod)*(ar[n-1-i]%mod))%mod;
                }
            }

        } else if(ar[0]>=0){
            for(int i=0;i<k;i++){
                sol=((sol%mod)*(ar[n-1-i]%mod))%mod;
            }
        }
        if(sol<0)sol=(sol+mod+mod)%mod;
        printLong(sol);
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

