#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define vll vector<ll>
using namespace std;


int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n;
        cin>>n;
        vll v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(all(v));
        int ans=1;
        int m;
        if(n>=2)m=v[1]-v[0];
        for(int i=1;i<n;i++)
        {
            if(v[i]-v[i-1]<m)
            {
                m=v[i]-v[i-1];
            }
            if(m<v[i])break;
            ans++;
        }
        cout<<ans<<endl;
    }
}