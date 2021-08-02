#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ll n,i,j,x,y;
    cin>>n;
    vector<ll> in,out;
    for(i=0;i<n;i++)
    {
        cin>>x>>y;
        in.pb(x),out.pb(y);
    }
    sort(in.begin(),in.end());
    sort(out.begin(),out.end());
    i=j=0;
    ll ans=0,present=0;
    while(i<n)
    {
        if(in[i]<out[j])
        {
            present++;
            i++;
        }
        else
        {
            j++;
            present--;
        }
        ans=max(ans,present);
    }
    cout<<ans<<endl;
}