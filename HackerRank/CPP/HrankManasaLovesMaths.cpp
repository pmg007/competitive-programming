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
using namespace std;
typedef long long int lli;
inline int readInt();
inline lli readLong();
inline void printInt(int a);
inline void printLong(lli a);
inline void readString(char *str);

int main(){
    int t = readInt();
    while (t-- > 0) {
        string s;cin>>s;
        vector<int> v; v.push_back(0);
        for(int i=100;i<1000;i++) if(i%8==0) v.push_back(i);
        if(s.length()==1){
            if(s=="8"||s=="0") printf("YES\n"); else printf("NO\n"); continue;
        }
        else if(s.length()==2){
            int temp;
            temp = (int)((s[0]-'0')*10+(s[1]-'0'));if(temp%8==0){printf("YES\n");continue;}
            temp = (int)((s[1]-'0')*10+(s[0]-'0'));if(temp%8==0){printf("YES\n");continue;}
            printf("NO\n");continue;
        }
        else{
            int a[10]={0},i;
            for(i=0;i<s.length();i++) a[s[i]-'0']++;
            for ( i = 0; i < v.size(); i++) {
                int h = v[i]/100, t=(v[i]%100)/10, o = v[i]%10;
                if (a[h] > 0) {
                    a[h]--;
                    if(a[t] > 0){
                        a[t]--;
                        if(a[o]>0) break;
                        a[t]++;
                    }
                    a[h]++;
                }
            }
            if(i==113) printf("NO\n"); else printf("YES\n");
        }
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