#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
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
#define pbdspair tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
#define pbds tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

int main()
{
    ll tt;
    cin>>tt;
    //deb(tt);
    while(tt--)
    {
        ll n,k;
        cin>>n>>k;
        vll v;
        ll fnd=0;
        for(int i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            if(x>=2*k)fnd=1;
            v.pb(x);
        }
        //vll v1=v;
        sort(all(v),greater<ll>());
        if(fnd==1)
        {
            ll b=0;
            ll ans=1;
            for(int i=1;i<n;i++)
            {
                //cout<<b<<endl;
                b+=v[i];
                if(b>=k)break;
                
                ans++;
            }
            if(b<k)cout<<-1<<endl;
            else cout<<ans<<endl;
        }
        else
        {
            ll a=0;
            ll ans=0;
            for(int i=0;i<n;i++)
            {
                a+=v[i];
                if(a>=2*k)break;
                
                ans++;
            }
            if(a<k)cout<<-1<<endl;
            else cout<<ans+1<<endl;
        }
        
    }
}