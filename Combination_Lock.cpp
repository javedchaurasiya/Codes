#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        ll w,n,i;
        cin>>w>>n;
        ll ar[w];
        for(i=0;i<w;i++)
        {
            cin>>ar[i];
        }
        sort(ar,ar+w);
        ll m=w/2;
        ll ans=0;
        for(i=0;i<w;i++)
        {
            ans+=abs(ar[m]-ar[i]);
        }
        cout<<"Case #"<<t<<":"<<" "<<ans<<endl;
    }
}