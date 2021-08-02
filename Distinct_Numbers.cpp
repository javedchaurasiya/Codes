#include<bits/stdc++.h>
#define ll long long
using namespace std;
bitset<1000000001> m;

int main()
{
    ll n,i,ct=0;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        m[x]=true;
        
    }
    ct=m.count();
    cout<<ct<<endl;

}