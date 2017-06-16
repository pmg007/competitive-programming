#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s; int i=0, j=s.length()-1;
        bool k = true;
        while(i<=j) {
            if (s[i] == s[j]) {
                i++;j--;
            }
            else {k=false;break;}
        }
        if(!k) cout<<"losses\n"; else cout<<"wins\n";
    }
}