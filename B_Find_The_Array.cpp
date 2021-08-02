

#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
using namespace std;


int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        
        ll n;
        cin>>n;
        vll v(n,0);
        for(ll i=0;i<n;i++)
        {
            cin>>v[i];
            //cout<<v[i]<<" ";
        }
        vll b(n,1);
        b[0]=v[0];
        for(ll i=1;i<n;i++)
        {
            ll a=v[i]/b[i-1];
            if(a*b[i-1]==v[i])b[i]=v[i];
            else
            {
                ll decrement=0;
                ll increment=(a+1)*b[i-1] - v[i];
                if(a==0)decrement=v[i]-1;
                else decrement=v[i]-a*b[i-1];
                if(increment<decrement && increment+v[i]<=1000000000)b[i]=v[i]+increment;
                else b[i]=v[i]-decrement;
            }
             
        }
        for(ll i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}