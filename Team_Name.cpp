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

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll n;
        cin >> n;
        ll ar[n + 1][26];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                ar[i][j] = 0;
            }
        }
        vector<string> v;
        map<string, vector<ll>> m;
        for (int i = 0; i < n; i++)
        {
            string st;
            cin >> st;
            v.pb(st);
            char ch = st[0];
            st.erase(st.begin());
            m[st].pb(ch - 'a');
        }
        for (int i = 0; i < n; i++)
        {
            string st = v[i];
            st.erase(st.begin());
            for (auto x : m[st])
            {
                ar[i][x] = 1;
            }
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ar[i][v[j][0] - 'a'] == 0 && ar[j][v[i][0] - 'a'] == 0)
                    ans++;
            }
        }
        cout << ans << endl;
    }
}