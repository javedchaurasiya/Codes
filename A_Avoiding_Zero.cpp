#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,i,s=0,cs=0;
        cin>>n;
        vector<ll> a,b,c;
        for(i=0;i<n;i++)
        {
            ll x;
            cin>>x;
            s+=x;
            if(x==0)c.push_back(x);
            else if(x>0)a.push_back(x);
            else b.push_back(x);

        }
        if(s==0) cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            if(s>0)
            {
                for(i=0;i<a.size();i++)cout<<a[i]<<" ";
                for(i=0;i<b.size();i++)cout<<b[i]<<" ";
            }
            else
            {
                for(i=0;i<b.size();i++)cout<<b[i]<<" ";
                for(i=0;i<a.size();i++)cout<<a[i]<<" ";
            }
            for(i=0;i<c.size();i++)cout<<c[i]<<" ";
            cout<<endl;
        }
        
        
        


    }
    
    
}