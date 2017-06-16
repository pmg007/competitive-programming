#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin>>t;
    while (t-- > 0) {
        string s; cin>>s; int n = s.length();
        int d; cin>>d;
        string temp1 = s.substr(d-1);
        string temp2 = s.substr(0,d-1);
        if (n%2==0) {
            if(d%2==0) {
                reverse(temp2.begin(), temp2.end());
                cout<<temp1+temp2<<endl;
            }
            else cout<<temp1+temp2<<endl;
        }
        if (n % 2 != 0) {
            if (d % 2 != 0) {
                reverse(temp2.begin(),temp2.end());
                cout<<temp1+temp2<<endl;
            }
            else cout<<temp1+temp2<<endl;
        }
    }
    return 0;
}