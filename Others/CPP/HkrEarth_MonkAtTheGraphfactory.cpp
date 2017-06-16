#include <iostream>
using namespace std;
int main(){
    int n,x,s=0;cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;s+=x;
    }
    if(s==(n-1)*2)cout<<"Yes\n";else cout<<"No"<<endl;
}

