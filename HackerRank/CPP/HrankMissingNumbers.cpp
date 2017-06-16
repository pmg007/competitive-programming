#define gc getchar_unlocked
#define pc putchar_unlocked
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
int main(){
    int n=readInt(),temp;
    vector<int> a;for(int i=0;i<n;i++) {temp = readInt();a.push_back(temp);} sort(a.begin(),a.end());
    int m = readInt();
    vector<int> b;for(int i=0;i<m;i++) {temp = readInt();b.push_back(temp);} sort(b.begin(),b.end());
    set<int> s;
    for (int i = 0,j=0; i < m;i++) {
        if(b[i]==a[j]){
            j++;continue;
        } else{
            //cout<<b[i]<<"fvvv";
            s.insert(b[i]);
        }
    }
    for(set<int>::iterator it=s.begin();it!=s.end();++it) cout<<*it<<" ";
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
