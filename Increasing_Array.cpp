#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,i,ans=0;
    cin>>n;
    ll ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=1;i<n;i++)
    {
        if(ar[i]<ar[i-1])
        {
            ans+= ar[i-1]-ar[i];
            ar[i]=ar[i-1];
        }
    }
    cout<<ans<<endl;
}