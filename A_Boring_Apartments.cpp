#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll countDigit(ll n) 
{ 
    return floor(log10(n) + 1); 
}

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll x,d,ans;
        cin>>x;
        ll b=x%10;
        d=countDigit(x);
        ans=0;
        ans=10*(b-1)+(d*(d+1))/2;
        cout<<ans<<endl;


    }
}


