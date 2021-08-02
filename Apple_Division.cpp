#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,i,sum1=0,sum2=0,j;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ll min1=LLONG_MAX;
    for (ll i = 0; i < pow(2, n); i++) { ll sum1 = 0, sum2 = 0; for (ll j = 0; j < n ; j++) { if (i & 1 << j) sum1 += a[j]; else sum2 += a[j]; } min1 = min(min1, abs(sum1 - sum2)); }
    cout<<min1<<endl;
}