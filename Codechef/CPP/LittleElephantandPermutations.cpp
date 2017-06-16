//
// Created by Pragam GANDHI on 13-Dec-15.
//

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                if(a[i]>a[j])
                    c++;
        }

        int c1=0;//cout<<c<<"\n";
        for(int i=1;i<n;i++)
            if(a[i]<a[i-1])
                c1++;
        if(c1==c)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
}