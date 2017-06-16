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
#include <algorithm>
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
inline void readString(char *str);

bool solve(int x,int s,vector<lli> sum) {
    for (int i = 0; i < (s/x); i++) {
        if(binary_search(sum.begin(),sum.end(),((i+1)*x))) continue;
        else return false;
    }
    return true;
}
int main(){
    vector<int> a;int n;
    vector<lli> sum;
    n = readInt();
    for (int i = 0; i < n; i++) {
        int tmp = readInt(); a.push_back(tmp);
    }
    for (int i = 0; i < n; i++) {
        if(i==0) sum.push_back(a[i]);
        else sum.push_back(a[i]+sum[i-1]);
    }
    lli s = sum.at(n-1);
    vector<lli> ans;
    for (int i = 1; i*i<=s; i++) {

        if(s%i==0){
            if(solve (i,s,sum)) ans.push_back(i);
            if ((i * i) != s) {
                if(solve ((s/i),s,sum)) ans.push_back(s/i);
            }
        }
    }
    sort(ans.begin(),ans.end());
    for (vector<lli>::iterator it = ans.begin(); it != ans.end(); ++it) {
        printLong(*it);
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
    pc(' '); //pc('\n');
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
    pc(' '); //pc('\n');
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