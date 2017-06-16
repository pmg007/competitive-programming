#include <iostream>
#include <cmath>
#include <cstdio>
#include <stdlib.h>

using namespace std;
int main(){
    int n,m,ans=0;scanf("%d %d",&n,&m);
    if(n<=1 && m<=1) {printf("0\n");exit(0);}
    while(n>0 && m>0 &&m+n>=3){
        int a=n-2,b=m-1,c=n-1,d=m-2;
        if(abs(a-b)<abs(c-d)){
            n-=2;m-=1;
        }else{
            n-=1;m-=2;
        }
        ans+=1;
       // cout<<n<<" "<<m<<endl;
    }
    printf("%d\n",ans);
}