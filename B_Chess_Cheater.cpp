#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        string st;
        ll n,k,ans=0,wc=0,lc=0,ws=0,i,s=0;
        cin>>n>>k;
        cin>>st;
        vector<ll> v;
        for(i=0;i<n;i++)
        {
            if(st[i]=='W')
            {
                wc++;
                if(lc>0)v.pb(lc);
                lc=0;
            }
            else lc++;
            if(lc!=0 && i==n-1)v.pb(lc);
        }
       /*   for(i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl; */ 
         if(st[0]=='W' && st[n-1]=='W')ws=v.size()+1;
        else if(st[0]=='L' && st[n-1]=='L')ws=v.size()-1;
        else ws=v.size();
        ll swin=2*wc -ws;
        if(k+wc>=n)ans=2*n -1;
        else
        {
           
            sort(v.begin(),v.end());
            ll valid=0;
            ll t=k,fl=0;
            for(i=0;i<v.size();i++)
            {
                if(t>=v[i])
                {
                    valid+= 2*v[i] +1;
                    t-=v[i];
                    fl=1;
                }
                else if(t<v[i])
                {
                    if(fl==1)valid+=2*t;
                    else valid+=2*t -1;
                    break;
                }                
            }
            //ws-=valid;
            //cout<<valid<<endl;
            cout<<swin<<endl;
            ans=swin + valid;
        }
        if(k==0)ans=swin;
        cout<<ans<<endl;
        
    }
}