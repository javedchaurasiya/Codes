#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ll n, sum = 0;
    ll ans = INT_MIN;
    cin >> n;
    ll k;
    cin >> k;
    ll mini = min(k,0ll);
    ans = k;
    sum=k;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> k;
        sum += k;
        ans = max(ans, sum - mini);
        mini = min(mini, sum);
    }
    cout << ans << endl;
}