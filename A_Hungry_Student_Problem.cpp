#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,i,j,s,f=0;
        cin>>n;
        for(i=0;i<=n/3;i++)
        {
            if(f==1)break;
            for(j=0;j<=n/7;j++)
            {
                s=3*i + 7*j;
                if(s>n)break;
                else if(s==n)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f==0)puts("NO");
        else puts("YES");
    }
}