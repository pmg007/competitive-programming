#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
    int n,k=0,a[150];a[0]=6;
    cin >> n;
    for(int i=1;i<150;i++){
        a[i]=a[i-1]+22+16*(i-1);
    }
    if(n==0) goto x;
    for(int i=1;i<=n;i++){
        for(int s=1;s<=n-i;s++)cout<<" ";
       for(int j=1;j<=i;j++){
           cout<<setfill('0')<<setw(5)<<a[k]<<" ";k+=1;
       }
        cout<<"\n";
    }
    x:;
}