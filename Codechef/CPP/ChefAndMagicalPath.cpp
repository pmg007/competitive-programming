#include<iostream>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int q=0;q<test;q++)
    {
        long long int n,m;
        cin>>n>>m;
        if((n==1 && m>2) || (m==1 && n>2))
        {
            cout << "No" << endl;
            goto x;
        }
        else if((n==1 && m==2)||(m==1 &&n==2))
        {
            cout<<"Yes"<<endl;
            goto x;
        }
        else if(n%2==0 || m%2==0)
        {
            cout<<"Yes"<<endl;
            goto x;
        }
        else if(n%2!=0 && m%2!=0)
        {
           cout<<"No"<<endl;
        }
        x:;
    }
    return 0;
}

