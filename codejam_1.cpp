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
// using namespace __gnu_pbds;

int main()
{
    ll tt;
    cin>>tt;
    int it;
    for(int it=1;it<=tt;it++)
    {
        ll n;
        cin>>n;
        vll v(n,0);
        vll m(101,0);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]=i;
        }
        sort(all(v));
        ll ans=0;
        vector<pair<ll,ll>> v1;
        for(int i=0;i<n;i++)
        {
            ll pos=m[v[i]];
            for(auto j:v1)
            {
                if(pos>=j.fi && pos<=j.se)
                {
                    pos=j.se-pos+j.fi;
                }
            }
            v1.pb({i,pos});
            ans+=pos-i+1;
        }
        cout<<"Case #"<<it<<": "<<ans-1<<endl;
    }
}