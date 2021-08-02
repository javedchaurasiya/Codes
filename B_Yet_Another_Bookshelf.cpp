#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,i,p;
        ll ans=0;
        cin>>n;
        ll ar[n];
        ll ct=0;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]==1)ct++;
        }
       
        /* for(i=0;i<n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<endl; */
        p=-1;
        for(i=0;i<n;i++)
        {
            if(ar[i]==1 && p!=-1)
            {
                ans+=i-p-1;
                p=i;
            }
        else if(ar[i]==1 && p==-1)
        {
            p=i;
        }
        }
        if(ct==1)cout<<0<<endl;
        else cout<<ans<<endl;
        
        
    }
}