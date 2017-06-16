#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    //for(int i=0;i<10010;i++) cout<<a[i];
    while (t-- > 0) {
        int a[10010]={0};
        int n,x; cin>>n;
        for (int i = 0; i < n; i++) {
            cin>>x;a[x]+=1;
        }
        for (int i = 0; i < 10010; i++) {
            if (a[i] % 2 == 1) {
                cout<<i<<endl;break;
            }
        }
    }
}