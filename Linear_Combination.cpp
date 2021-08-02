#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
ll x = 239;

int main()
{
    ll tt = 1;
    //cin>>tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        vll v(n, 0);
        ll s = 0;
        ll ct = 0;
        ll mod = 998244353;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            s += v[i];
            if (v[i] == 0)
                ct++;
        }
        if (s % x != 0 || s == 0)
        {
            ll ans = 1;
            ll a = x - 1;
            for (int i = 2; i <= n; i++)
            {
                //ans*=a;
                ans = ((ans % mod) * (a % mod)) % mod;
                a--;
            }
            if (ct == n)
                ans = (ans * x) % mod;
            cout << ans << endl;
        }
        else
        {
            ll nz = n - ct;
            if ((s / x) % 2 == 0 && ct == 0)
            {
                ct++;
                nz--;
            }
            if (nz == 2)
                cout << 0 << endl;
            else
            {

                vll ar(30, 1);
                ar[2] = 238;
                for (int i = 3; i <= 29; i++)
                {
                    ar[i] = (((i - 1) % mod) * (ar[i - 1] % mod)) % mod;
                    //deb(ar[i]);
                }
                ll ps = 1;
                ll a = x - 1;
                for (int i = 2; i <= nz; i++)
                {
                    ps = ((ps % mod) * (a % mod)) % mod;
                    a--;
                }
                //deb(ps);
                if (nz % 2 == 1)
                    ps = (ps + ar[nz]) % mod;
                else
                    ps = (ps - ar[nz]) % mod;
                //deb(ps);
                ll ab = x - nz;
                for (int i = 0; i < ct; i++)
                {
                    ps = ((ps % mod) * (ab % mod)) % mod;
                    ab--;
                }

                cout << ps << endl;
            }
        }
    }
}