#include<bits/stdc++.h>
#define k 100010
using namespace std;
bool a[k]={false};
void Sieve(){
    a[1] = true;
    for(int i=2;i*i<k;i++)
        if(!a[i])
            for(int j=i*i;j<k;j+=i)
                a[j] = true;
    //for(int i=1;i<=10000;i++) if(!a[i]) cout<<i<<" "; cout<<endl;
}
int main(){
    Sieve();
    int t; cin>>t;
    while (t-- > 0) {
        int n;cin>>n;if(a[n]) cout<<"no\n"; else cout<<"yes\n";
    }
}