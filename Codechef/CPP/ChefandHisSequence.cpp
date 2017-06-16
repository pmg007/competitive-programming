#include "bits/stdc++.h"
using namespace std;
int main(){
    int t; cin>>t;
    while (t--) {
        int n1,n2,x1;cin>>n1; string s1="",s2="";
        for (int i = 0; i < n1; i++) {cin>>x1;s1+=to_string(x1)+"A";}            // to_string works in C++14 only
        cin>>n2;
        for (int i = 0; i < n2; i++) {cin>>x1;s2+=to_string(x1)+"A";}//cout<<s1<<endl<<s2<<endl;
        if(s1.find(s2)!=-1) cout<<"Yes"<<endl; else cout<<"No"<<endl;
    }
}