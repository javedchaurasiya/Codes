#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,s=0;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        ll x;
        cin>>x;
        s+=x;
    }
    cout<<n*(n+1)/2 - s<<endl;
}