#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; scanf("%d",&t);
    while(t-- > 0) {
        int n,bombs=1; scanf("%d",&n);
        pair<int,int> P[n];
        for (int i=0;i<n;i++) {
            int x,y; scanf("%d %d",&x,&y);
            P[i].second = x; P[i].first = y;
        }
        sort(P,P+n); int k=0;
        for (int i = 1; i < n; i++) {
            if(P[k].first >= P[i].second) {
                continue;
            }
            else {
                bombs+=1;
                k=i;
            }
        }
        printf("%d\n",bombs);
    }
    return 0;
}