#include <bits/stdc++.h>
#define ll long long
using namespace std;
void res(ll n)
{

    ll a = 3 * (n) * (n + 4) + 2;
    ll b = n * (n + 4) + 2;
    if (n % 2 == 0)
        b = b * (-1);
    ll ans = 1 + (a + b) / 8;
    cout << ans << endl;
}
int main()
{
    ll tt = 1;
    // cin>>tt;
    while (tt--)
    {

        ll n;
        cin >> n;
        res(n);
    }
}