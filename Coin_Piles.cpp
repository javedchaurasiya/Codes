#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll a,b;
        cin>>a>>b;
        if(a==0 && b==0)puts("YES");
        else if(a==0 || b==0)puts("NO");
        else if(a==2*b || b==2*a)puts("YES");
        else if((a+b)%3==0 && 2*a>b && 2*b>a)puts("YES");
        else puts("NO");
    }
}