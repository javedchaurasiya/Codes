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
        ll n,t,l,h,m,i,ans=0,sum=0;
        cin>>n>>t;
        vector<ll> v(n,0);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        sort(all(v));
        l=0,h=1e18;
        while(l<=h)
        {
            m=l+(h-l)/2;
            sum=0;
            for(i=0;i<n;i++)
            {
                sum+=(m/v[i]);
                if(sum>=t)break;
            }
            if(sum>=t)
            {
                ans=m;
                h=m-1;
            }
            else l=m+1;
        }
        cout<<ans<<endl;
    }
}