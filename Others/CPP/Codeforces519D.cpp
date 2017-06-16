#include <cstdio>
#include <iostream>
#include <vector>
#include <map>

using namespace std;
typedef long long int lli;
int main(){
    int a[26];for(int i=0;i<26;i++)scanf("%d",&a[i]);lli ans=0;
    string s;cin>>s;int l=s.length();lli sum[l];vector<int> v[26];sum[0]=a[0];
    for(int i=0;i<l;i++){
        sum[i]=a[s[i]-'a']+sum[i-1];
        v[s[i]-'a'].push_back(i);
    }
    for(int i=0;i<26;i++){
        map<lli,int> m;
        for(int j=0;j<v[i].size();j++){
            int pos=v[i][j];
            ans+=m[sum[pos-1]];
            m[sum[pos]]++;
        }
        m.clear();
    }
    printf("%lld",ans);
    return 0;
}
