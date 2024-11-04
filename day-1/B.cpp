#include<iostream>
using namespace std;
int main()
{
    int a,b,c;cin>>a>>b>>c;

    for(int i=a;i<=b;i++)
    {
        if(i!=b && i%c==0)
        {
            cout<<i;break;
        }
        else if(i==b && i%c!=0) cout<<-1;
        else if(i==b && i%c==0) cout<<c;
    }

    return 0;
}

