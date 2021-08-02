#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        string st;
        ll n;
        cin>>n;
        cin>>st;
        ll i;
        ll ct=0;
        char ch=st[n-1];
        for(i=0;st[i];i++)
        {
            if(st[i]==ch)ct++;

        }
        if(ct==1)puts("NO");
        else puts("YES");
    }
}