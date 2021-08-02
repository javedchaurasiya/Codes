
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n;
        cin>>n;
        string r;
        string b;
        cin>>r;
        cin>>b;
        ll a,c;
        a=c=0;
        for(int i=0;i<n;i++)
        {
            if(r[i]==b[i])continue;
            else if(r[i]>b[i])a++;
            else c++;
        }
        if(a==c)puts("EQUAL");
        else if(a>c)puts("RED");
        else puts("BLUE");

    }
}