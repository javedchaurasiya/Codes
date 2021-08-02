#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
 
int main()
{
    ll n,i,s=0;
    cin>>n;
    ll ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        s+=ar[i];
    }
    /* ll av=s/n;
    ll ans=0;
    for(i=0;i<n;i++)
    {
        ans+=abs(av-ar[i]);
    } */
    sort(ar,ar+n);
    ll m=n/2;
    ll sum=0;
    for(i=0;i<n;i++)
    {
        sum+=abs(ar[i]-ar[m]);
    }
   ll ans=sum;
    cout<<ans<<endl;
 
}