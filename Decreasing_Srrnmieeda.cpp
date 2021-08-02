#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll l,r,ans;
        cin>>l>>r;
        if(r-l+1>l || l==1)cout<<-1<<endl;
        else cout<<r<<endl;
    }
}