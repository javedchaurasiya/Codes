#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,i;
        cin>>n;
        vector<ll> ar(n,0);
        ll flag=0;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(i=0;i<n-1;i++)
        {
            if(ar[i]!=ar[i+1])flag=1;
        }
        if(flag==0)cout<<-1<<endl;
        else
        {
            ll m=*max_element(ar.begin(),ar.end());
           // cout<<m<<" ";
            ll ans;
            for(i=0;i<n;i++)
            {
               if(ar[i]==m)
               {
                    if(i==0 && ar[i+1]<ar[i])
                    {
                        ans=i+1;
                        break;
                    }
                    else if(i==n-1 && ar[i-1]<ar[i])
                    {
                        ans=i+1;
                        break;
                    }
                    else if(ar[i-1]<ar[i] || ar[i+1]<ar[i])
                    {
                        ans=i+1;
                        break;
                    }
               }
            }
            cout<<ans<<endl;
        }
        
    }
}