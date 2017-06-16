#include <bits/stdc++.h>
//typedef long long ll;
using namespace std;
int main(){
    int n; scanf("%d",&n);
    pair<int,int> P[n];
    for (int i = 0; i < n; i++) {
        scanf("%d",&P[i].second);
        scanf("%d",&P[i].first);
    }
    sort(P,P+n);
    int k=0,ans=0;
    for (int i = 1; i < n; i++) {
        if(P[k].first >= P[i].second) continue;
        else{
            ans+=1;
            k=i;
        }
    }
    printf("%d",ans+1);
    return 0;
}