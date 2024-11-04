#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;

        string a,b;
        cin>>a;
        cin>>b;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(a[i] == 'R' && b[i] == 'S') c++;
            if(a[i] == 'S' && b[i] == 'R') c--;
            if(a[i] == 'S' && b[i] == 'P') c++;
            if(a[i] == 'P' && b[i] == 'S') c--;
            if(a[i] == 'P' && b[i] == 'R') c++;
            if(a[i] == 'R' && b[i] == 'P') c--;
        }

        if(c>=0) cout<<0<<endl;
        else
        {
          cout<<abs(c)<<endl;
        }

    }
    return 0;
}
