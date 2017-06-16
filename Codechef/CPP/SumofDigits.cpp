/*#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int t; cin>>t;
 	while(t-->0){
 		string s;cin>>s; long long sum=0;
 		for(long long i=0;i<s.length();i++){
 			sum+=((int)s[i]-48);
 		}
 		cout<<sum<<endl;
 	}
 	return 0;
 } */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	ll t;cin>>t;
	while(t--){
		string s; cin>>s;
		for(ll i=s.length()-1;i>=0;i--) cout<<s[i];cout<<endl;
	}
}