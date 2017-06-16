#include <iostream>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int q=0;q<test;q++)
    {
        int a,k;
        cin>>a>>k;
        string s;
        cin>>s;
        if(s.length()>=3)
        {
            cout<<"0"<<endl;
        }
        else
        {
            int hs=0;
            if(s.length()==1)
            {
                if(s=="a")
                    hs=0;
                else
                    hs=1;
                if(hs<=k)
                    cout<<"1"<<endl;
                else
                    cout<<"0"<<endl;

            }
            else if(s.length()==2)
            {
                if(s[0]!='a')
                    hs+=1;
                if(s[1]!='a')
                    hs+=1;
                if(hs<=k)
                    cout<<"1"<<endl;
                else
                    cout<<"0"<<endl;
            }
        }


    }
}

