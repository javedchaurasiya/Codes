#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp> 
// #include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define mll multiset<ll>
#define sll set<ll>
#define mpll map<ll,ll>
#define deb(x) cout<< #x <<":" <<" "<<x<<endl;
// #define pbdspair tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
// #define pbds tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;


int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,c;
        cin>>n>>c;
        vll v;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            v.pb(x);
        }
        sort(all(v));
        ll l=0,h=v[n-1];
        ll ans=-1;
        while(l<=h)
        {
            ll m=(l+h)/2;
            ll g=m-1;
            ll pre=v[0];
            ll x=c-1;
            for(int i=1;i<n;i++)
            {
                if(v[i]-pre>=g)
                {
                    x--;
                    pre=v[i];
                }
            }
            if(x<=0)
            {
                ans=max(g,ans);
                l=m+1;
            }
            else
            {
                h=m-1;
            }

        }
        cout<<ans<<endl;
        
    }
}