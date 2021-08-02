#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> v;
        for(ll i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll sum=0;
        for(ll i=n-1;i>=n-k-1;i--)
        {
            sum+=v[i];
        }
        cout<<sum<<endl;
    }

}