#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,ans=0,i;
    cin>>n;
    for(i=5;i<=n;i*=5)ans+=(n/i);
    cout<<ans<<endl;
}