#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    int q;scanf("%d",&q);
    stack<int> s;
    while(q--){
        int type;scanf("%d",&type);
        if(type>1){int c;scanf("%d",&c);s.push(c);}
        else {if(s.empty())printf("No Food\n");else {printf("%d\n",s.top());s.pop();}}
    }
}