#ifndef ONLINE_JUDGE
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

int calcLIS(vector<int> &v){
    vector< vector<int> > l(v.size());
    l[0].push_back(v[0]);
    for (int i = 1; i < v.size(); i++) {
        for (int j = 0; j < i; j++) {
            if (v[j] < v[i] && (l[i].size() < (l[j].size() + 1))) {
                l[i] = l[j];
            }
        }
        l[i].push_back(v[i]);
    }
    int max = 0;
    for (int i = 0; i < v.size(); i++) {
        if(l[i].size()>max) max = l[i].size();
    }
    return max;
}
int main(){
    int n = readInt();
    vector<int> v;
    for (int i = 0; i < n; i++) {
        v.push_back(readInt());
    }
    int ans = calcLIS(v);
    printInt(ans); pc('\n');
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