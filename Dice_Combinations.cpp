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

ll fun(ll n,ll ind)
{
    if(n==0)return 1;
    if(ind==0)return 0;
    if(ind<=n)return fun(n,ind-1)+fun(n-ind,ind);
    else return fun(n,ind-1);
}



int main()
{
    ll tt=1;
    //cin>>tt;
    while(tt--)
    {
      ll n;
      cin>>n;
      /* ll dp[7][n+1];
      memset(dp,0,sizeof(dp));
      for(int i=0;i<=6;i++)
      for(int j=0;j<=n;j++)
      {
          if(i==0)dp[i][j]=0;
          if(j==0)dp[i][j]=1;
      }
      dp[0][0]=1;
      ll wt[6];
      for(int i=0;i<n;i++)wt[i]=i+1;
      for(int i=1;i<=6;i++)
      {
          for(int j=1;j<=n;j++)
          {
              if(wt[i-1]<=j)dp[i][j]=dp[i-1][j]+dp[i][j-wt[i-1]];
              else dp[i][j]=dp[i-1][j];
          }
      }
      cout<<dp[6][n]; */
      ll ans=fun(n,6);
      cout<<ans<<endl;

    }
}