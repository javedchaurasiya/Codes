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
    ll tt=1;
    //cin>>tt;
    while(tt--)
    {
        ll n,m;
        cin>>n>>m;
        vll v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(all(v));
        ll l=0,h=v[n-1];
        ll ans;
        while(l<=h)
        {
            ll mid=(l+h)/2;
            ll x=0;
            auto it=ub(all(v),mid);
            if(it!=v.end())
            {
                int a=it-v.begin();
                for(int i=a;i<n;i++)
                {
                    x+=(v[i]-mid);
                }
            }
            if(x>=m)
            {
                ans=mid;
                l=mid+1;
            }
            else h=mid-1;
            
        }
        cout<<ans<<endl;
    }
}