#include <bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(), v.end()
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define mll multiset<ll>
#define sll set<ll>
#define mpll map<ll, ll>
#define deb(x) cout << #x << ":" \
                    << " " << x << endl;
#define pbdspair tree<pair<ll, ll>, null_type, less<pair<ll, ll>>, rb_tree_tag, tree_order_statistics_node_update>
#define pbds tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
using namespace std;
//using namespace __gnu_pbds;

int main()
{
   ll tt = 1;
   //cin>>tt;
   while (tt--)
   {
      ll n;
      cin >> n;
      vll a(n + 1, 0);
      ll ans = 0;
      ll mod = 998244353;
      for (int i = 1; i <= n; i++)
         cin >> a[i];
      for (int x1 = 0; x1 < 11; x1++)
      {
         for (int x2 = 0; x2 < 11; x2++)
         {
            for (int x3 = 0; x3 < 11; x3++)
            {
               for (int x4 = 0; x4 < 11; x4++)
               {
                  for (int x5 = 0; x5 < 11; x5++)
                  {
                     for (int x6 = 0; x6 < 11; x6++)
                     {
                        if ((x1 * a[1] + x2 * a[2] + x3 * a[3] + x4 * a[4] + x5 * a[5] + x6 * a[6]) % 11 == 0 && x1 != x2 && x2 != x3 && x3 != x1 && x4 != x1 && x2 != x4 && x3 != x4 && x5 != x1 && x5 != x2 && x5 != x3 && x5 != x4 && x6 != x1 && x6 != x2 && x6 != x3 && x6 != x4 && x6 != x5)
                        {
                           //cout<<x1<<" "<<x2<<" "<<x3<<endl;
                           //(ans = ((ans % mod) + 1) % mod);
                           ans++;
                        }
                     }
                  }
               }
            }
         }
      }
      cout << ans << endl;
   }
}