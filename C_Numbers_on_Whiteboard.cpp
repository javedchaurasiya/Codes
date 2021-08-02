#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,i,x;
        cin>>n;
        x=n;
        for(i=n-1;i>=1;i--)
        {
            x=(x+i+1)/2;
        }
        cout<<x<<endl;
        x=n;
        for(i=n-1;i>=1;i--)
        {
            cout<<x<<" "<<i<<endl;
            x=(x+i+1)/2;
        }
    }
}