#include <bits/stdc++.h>
using namespace std;
int main(){
    string s; cin>>s; int c=0,h=0,e=0,f=0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'C') {
            c++;
        }
        if (s[i] == 'H') {
            if (c > 0) {
                h++;c--;
            }
        }
        if (s[i] == 'E') {
            if (h > 0) {
                e++;h--;
            }
        }
        if (s[i] == 'F') {
            if (e > 0) {
                f++;e--;
            }
        }
    }
    cout<<f<<endl;
}