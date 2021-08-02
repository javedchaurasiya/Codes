#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        ll n,i,j;
        cin>>n;
        map<ll,ll> m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                ll x;
                cin>>x;
                m[i-j]+=x;

            }
        }
        ll ans=0;
        for(auto it=m.begin();it!=m.end();it++)
        {
            if(ans<it->second)ans=it->second;
        }
        cout<<"Case #"<<t<<":"<<" "<<ans<<endl;
    }
}