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
    while(tt--)
    {
        ll n,m;
        cin>>n>>m;
        ll ct=0;
        vector<pair<ll,ll>> v;
        sll r,c;
        for(int i=0;i<m;i++)
        {
            ll x,y;
            cin>>x>>y;
            r.insert(x);
            c.insert(y);
            v.pb({x,y});
        }
        ll ife=0;
        for(int i=0;i<m;i++)
        {
            if(v[i].fi==v[i].se)ct++;
            /*else
            {
                if(c.find(v[i].fi)!=c.end() && r.find(v[i].se)!=r.end())ife++;
            } */
        else if(c.find(v[i].fi)!=c.end() && r.find(v[i].se)!=r.end())ife++;
            
        }
       // deb(ife);
        if(ife==m-ct)cout<<ife+1<<endl;
        else cout<<m-ct-ife<<endl;
            }
}