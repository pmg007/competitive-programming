#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    int n;scanf("%d",&n);int temp;deque<int> a,b;
    for(int i=0;i<n;i++) {
        scanf("%d",&temp); a.push_back(temp);
    }
    for(int i=0;i<n;i++) {
        scanf("%d",&temp);b.push_back(temp);
    }
    int time=0;
    while(!a.empty()){
        if(a.front()==b.front()){
            a.pop_front();b.pop_front();time+=1;
        }else{
            a.push_back(a.front());a.pop_front();time+=1;
        }
    }
    printf("%d\n",time);
}

