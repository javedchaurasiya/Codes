#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,s,ans=0,i;
    cin>>n>>s;
    ll ar[n];
    for(i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    ll m=(n+1)/2 -1;
    if(s>ar[m])
    {
        for(i=m;i<n;i++)
    {
        if(ar[i]<s)ans=ans+s-ar[i];
    }
    }
    else if(s<ar[m])
    {
        for(i=m;i>=0;i--)
        {
            if(s<ar[i])ans=ans+ar[i]-s;
        }
    }
    cout<<ans<<endl;

}