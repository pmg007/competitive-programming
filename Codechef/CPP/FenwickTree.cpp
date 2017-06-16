#include <cstdio>
#include <iostream>
using namespace std;
int a[1005],BIT[1005],n;
/*
    BIT[1]=a[1]
    BIT[2]=a[1]+a[2]
    BIT[3]=a[3]
    BIT[4]=a[1]+a[2]+a[3]+a[4]
    BIT[5]=a[5]
    BIT[6]=a[5]+a[6]
    BIT[7]=a[7]
    BIT[8]=a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]
    BIT[9]=a[9]
    BIT[10]=a[9]+a[10]
    ....and so on....
*/
/*
    x&(-x):helps to find out the last set bit in number x
 */
void update(int x,int val){         //adds 'val' at index 'x' //Complexity=O(log n)
    for(;x<=n;x+=x&(-x)){
        BIT[x]+=val;
    }
}
int query(int x){                   //returns sum till index 'x' //Complexity=O(log n)
    int sum=0;
    for(;x>0;x-=x&(-x)){
        sum+=BIT[x];
    }
    return sum;
}
int main(){
    scanf("%d",&n);int a[n],t;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        update(i,a[i]);
    }
    printf("t=");scanf("%d",&t);
    while(t--){
        int l,r;scanf("%d %d",&l,&r);
        printf("%d %d:%d\n ",l,r,query(r)-query(l-1));
    }
}