#include<bits/stdc++.h>
#define ub upper_bound
#define ll long long
using namespace std;


int main()
{
    ll x,n,i,d1,d2;
    cin>>x>>n;
    ll ar[n];
    for(i=0;i<n;i++)
    {
         cin>>ar[i];
    }
    multiset<ll> p;
    multiset<ll,greater<ll>> d;
    p.insert(0);
    p.insert(x);
    d.insert(x);

    for(i=0;i<n;i++)
    {
        auto it=p.ub(ar[i]);
        auto jt=it;
        jt--;
        auto k=d.find(*it - *jt);
        d.erase(k);
        d1= *it - ar[i];
        d2= ar[i] - *jt;
        d.insert(d1);
        d.insert(d2);
        p.insert(ar[i]);
        ll ans=*(d.begin());
        cout<<ans<<" "; 
    }

}
