#include<iostream>
using namespace std;
int main()
{
    string s;cin>>s;

    int x = s.size();

    if(x==4) cout<<s;
    else if(x==3) cout<<"0"<<s;
    else if(x==2) cout<<"00"<<s;
    else if(x==1) cout<<"000"<<s;

    return 0;
}
