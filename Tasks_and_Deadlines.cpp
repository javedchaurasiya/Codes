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
       ll n,i,ans=0,f,d;
       cin>>n;
       multiset<pair<ll,ll>> s;
       for(i=0;i<n;i++)
       {
           cin>>f>>d;
           s.insert({f,d});
       }
       ll p=0;
       for(auto it=s.begin();it!=s.end();it++)
       {  
           ans+=(it->se)-(p+it->fi);
           p+=it->fi;
       } 
       cout<<ans<<endl;
    }
}