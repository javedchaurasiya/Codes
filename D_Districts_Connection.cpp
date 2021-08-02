#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,i,flag=0;
        cin>>n;
        vector<ll> v(n,0);
        for(i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(i=0;i<n-1;i++)
        {
            if(v[i]!=v[i+1])flag=1;
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            ll x=v[0];
            //unordered_map<ll,ll> used;
            for(i=0;i<n;i++)
            {
                if(v[i]!=x)
                {
                    cout<<1<<" "<<i+1<<endl;
                   // used[i]=1;
                }
            }
            for(i=0;i<n;i++)if(v[i]!=x)break;
            ll y=v[i];
            ll k=i;
            for(i=1;i<n;i++)
            {
                if(v[i]==x)
                {
                    cout<<k+1<<" "<<i+1<<endl;
                }
            }
        }
        
    }
}