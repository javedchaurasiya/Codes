#include<bits/stdc++.h>
#define ll long long
#define ub upper_bound
using namespace std;


int main()
{
    ll n,i,ans=0;
    cin>>n;
    ll x;
    multiset<ll> b;
    for(i=0;i<n;i++)
    {
        cin>>x;
        auto it=b.ub(x);
        if(it==b.end())
        {
            b.insert(x);
            ans++;
        }
        else
        {
            b.erase(it);
            b.insert(x);
        }
        
    }
    cout<<ans<<endl;

}