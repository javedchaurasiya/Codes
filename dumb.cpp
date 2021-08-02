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
ll x=17;

int main()
{
    ll tt=1;
    //cin>>tt;
    while(tt--)
    {
       ll n;
       cin>>n;
       vll v(n,0);
       ll s=0;
       ll ct=0;
       for(int i=0;i<n;i++)
       {
           cin>>v[i];
           s+=v[i];
           if(v[i]==0)ct++;
       }
       if(s%x!=0 || s==0)
       {
          ll ans=1;
          ll a=x-1;
          for(int i=2;i<=n;i++)
          {
              ans*=a;
              a--;
          }
          if(ct==n)ans=ans*x;
          cout<<ans<<endl;
       }
       else
       {
           ll nz=n-ct;
           if(nz==2)cout<<0<<endl;
           else
           {
               vll ar(20,1);
               ar[2]=-16;
               for(int i=3;i<=10;i++)
               {
                    ar[i]=-1*(i-1)*(ar[i-1]);
                    //deb(ar[i]);
               }
               ll ps=1;
               ll a=x-1;
               for(int i=2;i<=nz;i++)
               {
                   ps=ps*a;
                   a--;
               }
               //deb(ps);
               ps=ps+ar[nz];
               ll ab=x-nz;
               for(int i=0;i<ct;i++)
               {
                   ps=ps*ab;
                   ab--;
               }
               cout<<ps<<endl;
           }
           
       }
       
       
    }
}