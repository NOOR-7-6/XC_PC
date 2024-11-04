#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;

    while(t--)
    {
        int x;
        cin>>x;

        int y = 100-x;

        int z = y%10;

        cout<<y-z<<endl;
    }
    return 0;
}


