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
        ll a,b,k;
        cin>>a>>b>>k;
        vll v1,v2;
        vector<pair<ll,ll>> v;
        for(int i=0;i<k;i++)
        {
            ll x;
            cin>>x;
            v1.pb(x);
        }
        for(int i=0;i<k;i++)
        {
            ll x;
            cin>>x;
            v2.pb(x);
        }
        ll ct=0;
        for(int i=0;i<k;i++)
        {
            for(int j=i;j<k;j++)
            {
                if(v1[i]!=v1[j] && v2[i]!=v2[j])ct++;
            }
        }
        cout<<ct<<endl;
    }
}