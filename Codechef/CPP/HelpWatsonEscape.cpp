#include <iostream>
using namespace std;
const long long int x=1000000007;
long long int modular(long long int a,long long int b)
{
    long long int s=1;
    while(b!=0)
    {
        if(b%2==1)
        {
            s=s*a;
            s=s%x;
        }
        a=a*a;
        b/=2;
        a=a%x;

    }
    return s;
}
int main()
{
    long long int test,n,k;
    cin>>test;
    for(int q=0;q<test;q++)
    {
        cin>>n>>k;
        //n%=x;
        //k%=x;
        long long int s=1;
        /*for(int i=1;i<=n-1;i++)
        {
            s=s*(k-1);
            s=s%x;
        }*/
        s=modular(k-1,n-1);
        s=((k%x)*(s%x))%x;
        if(s<0)
        {
            s=(s+x+x)%x;
        }
        else
        {
            s=s%x;
        }
        cout<<s<<endl;
    }
    return 0;
}

