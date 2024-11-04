#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;

    vector<long long>a(n);

    long long c=0,s=0;

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s+=a[i];
        if(a[i]%2!=0) c++;
    }

    if(c%2==0) cout<<s;
    else
    {
        long long x;

        sort(a.begin(),a.end());

        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                x = a[i];break;
            }
        }

        cout<<s-x;
    }
    return 0;
}

