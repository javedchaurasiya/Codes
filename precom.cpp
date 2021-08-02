#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp> 
//#include<ext/pb_ds/tree_policy.hpp>
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
// #define mpll map<ll,ll>
// #define deb(x) cout<< #x <<":" <<" "<<x<<endl;
// #define pbdspair tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
// #define pbds tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
//using namespace __gnu_pbds;

int main()
{
   #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
    ll tt=1;
    //cin>>tt;
    while(tt--)
    {
   ll n,mod= 998244353;
    cin>>n;
   for (ll ii = 0; ii < pow(2,n); ++ii)
   {
      string s;
        int binaryNum[n]; 
  
    // counter for binary array 
    int i = ii; 
    while (ii > 0) { 
  
        // storing remainder in binary array 
        s.pb(ii % 2 +'0'); 
        ii = ii / 2; 
        // i++; 
    } 
  ii =i;
   if(s.length()!=n)
   {
    while(s.length()!=n)s.pb('0');
   }
   reverse(s.begin(),s.end());

    cout<<s<<" ";
    std::vector<ll> map(n+1,0);
    for (int i = 0; i < s.length(); ++i)
    {
      if(s[i]=='1')map[i+1]++;
    }
    int a[n];
    for (int i = 1; i <= n; ++i)
    {
      a[i-1]=i;
    }
    ll count=0,cx=0;

    std::vector<ll> v(n+1,0);
     do { 
      count=0;
        for (int i = 1; i < n; ++i)
        {
             if(a[i]%a[i-1]==0)
             {
              if(map[a[i]/a[i-1]]!=0)count++;
             }
        }
        // cx++;
        v[count]=(v[count]+1)%mod;


    } while (next_permutation(a, a + n)); 
    for (int i = 0; i < n; ++i)
    {
      cout<<v[i]<<" ";
    }
    cout<<endl;
   }
    }
}