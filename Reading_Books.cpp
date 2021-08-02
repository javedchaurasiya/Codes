#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
using namespace std;

int main()
{
    ll tt=1;
    //cin>>tt;
    while(tt--)
    {
        ll n,i,s1,s2=0;
        cin>>n;
        vector<ll> v(n);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
            s2+=v[i];
        }
        sort(all(v));
        if(v[n-1]>=s2-v[n-1])cout<<2*v[n-1]<<endl;
        else
        {
            ll ans=2*(s2-v[n-1])-(s2-2*v[n-1]);
            cout<<ans<<endl;
        }
    }
}