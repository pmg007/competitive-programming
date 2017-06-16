#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    int a[12] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
    while (t-->0) {
        int p; cin>>p;
        int menu=0,sum=p;
        int pos = 11;
        while (sum > 0 && pos >= 0) {
            while (sum >= a[pos] && sum != 0) {
                sum-=a[pos];menu+=1;
            }
            pos-=1;
        }
        cout<<menu<<endl;
    }
    return 0;
}