#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll a, b, c ;
        ll f = 0, s = 0, temp = 0, n;
        cin >> a >> b >> c;
        s = a + b + c;
        ll m = min(a, b);
        m = min(m, c);
        n = floor(s / 9) + 1;
        temp = ((s + 8) / 9) + 1;

        if (n == temp && n <= m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}