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

vll fun(ll n,ll x)
{
  vll v(n-1,1);
  x=x-n+1;
  if(x<=n-1)v[0]+=x;
  else
  {
    ll i=0;
    ll f = n-1;
    while(x>f)
    {
      // ll f = 
      ll temp=f;
      // temp = x - temp;
      v[i++]+=temp;
      x=x-temp;
      f--;

    }
    v[i]+=x;
  }
//   for(ll i=0;i<n-1;i++)cout<<v[i]<<" ";
  return v;
}



int main()
{
    ll tt;
    cin>>tt;
    for(int it=1;it<=tt;it++)
    {
        ll n,cost;
        cin>>n>>cost;
        ll max=(n*(n+1))/2 -1;
        if(cost<n-1 || cost>max)cout<<"Case #"<<it<<": IMPOSSIBLE"<<endl;
        else
        {
            vll v=fun(n,cost);
            vll v1;
            for(int i=0;i<n;i++)v1.pb(i+1);
            for(int i=0;i<n-1;i++)
            {
                if(v[i]==1)break;
                auto j=find(all(v1),i+1);
                int pos=j-v1.begin();
                if((i+1)%2==0)reverse(v1.begin()+(pos+1-v[i]),v1.begin()+pos+1);
                else reverse(v1.begin()+pos,v1.begin()+pos+v[i]);
            }
            cout<<"Case #"<<it<<": ";
            for(int i=0;i<n;i++)cout<<v1[i]<<" ";
            cout<<endl;
        }
    }
}