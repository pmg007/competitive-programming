#ifndef ONLINE_JUDGE
#define gc getchar
#define pc putchar
#else
    #define gc getchar_unlocked
    #define pc putchar_unlocked
#endif

#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
inline void readString(char *str);

int main(){

    int n = readInt();
    int a[n], min;
    for(int i=0;i<n;i++) a[i] = readInt();
    sort(a,a+n); min = a[1]-a[0];
    vector<pair<int,pair<int,int>>> p;
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]<=min) {
            min = a[i]-a[i-1];
            p.push_back(make_pair(min,make_pair(a[i-1],a[i])));
        }
    }
    sort(p.begin(),p.end());
    int temp = p[0].first;
    for(int i=0;i<p.size();i++){
        if(p[i].first==temp)
        { printInt(p[i].second.first); printInt(p[i].second.second);}
    }
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