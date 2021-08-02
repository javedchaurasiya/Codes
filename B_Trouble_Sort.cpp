#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,i,j;
        ll flag=0;
        cin>>n;
        ll b[n];
        vector<ll> a(n,0);
        ll zc,oc;
        zc=oc=0;
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]==0)zc++;
            else oc++;
        }
        if(zc==0 || oc==0)
        {
            for(i=0;i<n-1;i++)
            {
                if(a[i]>a[i+1])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)cout<<"No"<<endl;
            else cout<<"Yes"<<endl;
        }
        else cout<<"Yes"<<endl;
        
    }
}