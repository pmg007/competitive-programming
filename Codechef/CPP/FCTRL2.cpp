#include <bits/stdc++.h>
using namespace std;
int a[200];
int main() {
    int t,n,x,temp,m,i,j; cin>>t;
    while(t--){
        cin>>n;x=n;temp=0;m=0;j=0;
        while(x>0){
            a[j++]=x%10;x/=10;m+=1;
        }
        for(i=2;i<n;i++){
            for(j=0;j<m;j++){
                x=a[j]*i+temp;
                a[j]=x%10;temp=x/10;
            }
            while(temp>0){
                a[j++]=temp%10;temp/=10;m+=1;
            }
            temp=0;
        }
        for(j=m-1;j>=0;j--) cout<<a[j]; cout<<"\n";
    }
}