#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;


int main()
{
    ll n,m,k,i,j,x;
    cin>>n>>m>>k;
    vector<ll> a;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a.pb(x);
    }
    multiset<ll> b;
    for(i=0;i<m;i++)
    {
        cin>>x;
        b.insert(x);
    }
    ll ans=0;
    sort(a.begin(),a.end());
    for(i=0;i<n;i++)
    {
        if(b.empty())break;
        else
        {
            x=a[i]-k;
            auto it=b.lower_bound(x);
            if(it!=b.end() && *it<=a[i]+k)
            {
                ans++;
                b.erase(it);
            }
        }
          
    }
     
        cout<<ans<<endl;
}