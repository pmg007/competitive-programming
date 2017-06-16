#include "bits/stdc++.h"
typedef long long int lli;
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        double m,a;cin>>m;a=m;
        for(int i=0;i<5;i++){
            int temp;cin>>temp;
            m=m+(temp*m/100);
        }
        if(m>a){
            double per=(m-a)*100/a;
            cout<<"+"<<per<<endl;continue;
        }else if(m<a){
            double per=(a-m)*100/a;
            cout<<"-"<<per<<endl;continue;
        }else{
            cout<<0<<endl;continue;
        }
    }
}