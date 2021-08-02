#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        ll ans=(i - 1)*(i + 4)*(i*i - 3*i + 4)/2;
        cout<<ans<<endl;
    }
}