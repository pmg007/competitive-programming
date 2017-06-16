#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,naa=0,nab=0,nba=0,nbb=0;cin>>n;while(n--){
            string s;cin>>s;if(s=="aa")naa+=1;else if(s=="ab")nab+=1;else if(s=="ba")nba+=1;else nbb+=1;}
            if(n==1) {if(naa)cout<<"aa"; else if(nbb)cout<<"bb";continue;}
            int fa=0,fb=0;
            if(naa&1)fa=1;if(nbb&1)fb=1;
            for(int i=0;i<naa/2;i++)cout<<"aa";
            for(int i=0;i<(min(nab,nba));i++)cout<<"ab";
            for(int i=0;i<nbb/2;i++)cout<<"bb";
            if(fa) {cout<<"aa";goto x;}
            if(fb) cout<<"bb";
        x:  for(int i=0;i<nbb/2;i++)cout<<"bb";
            for(int i=0;i<(min(nab,nba));i++)cout<<"ba";
            for(int i=0;i<naa/2;i++)cout<<"aa";cout<<"\n";
    }
}