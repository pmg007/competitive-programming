#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int q=0;q<test;q++)
    {
        int n,u,v,tempn;
        cin>>n;
        tempn=n-1;
        int w[tempn];
        if(n==1)
        {
            cout<<"0"<<endl;
        }
        for(int i=0;i<n-1;i++)
        {
            cin>>u>>v>>w[i];
        }
        sort(w,w+tempn);

        if(n>1)
        {
            cout<<w[tempn-1]<<endl;
        }
        for(int i=0;i<n-1;i++)
        {
            cout<<"0"<<endl;
        }

    }
    return 0;
}

