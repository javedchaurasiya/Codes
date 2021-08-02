#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string st;
    cin>>st;
    ll i,j,ct=0,cto=0,cte=0;
    ll n=st.length();
    vector<ll> ha(26,0);
    for(i=0;i<n;i++)
    {
        if(ha[st[i]-65]==0)ct++;
        ha[st[i]-65]++;
        
    }
    vector<ll> ev(26,0);
        vector<ll> od(26,0);
        for(i=0;i<26;i++)
        {
            if(ha[i]!=0 && ha[i]%2==0)ev[i]=ha[i];
            else if(ha[i]!=0 && ha[i]%2==1)od[i]=ha[i];
        }
        for(i=0;i<26;i++)
        {
            if(ev[i]!=0)cte++;
            if(od[i]!=0)cto++;
        }

    
    if(ct>(n+1)/2 || (n%2==0 && cto!=0))cout<<"NO SOLUTION"<<endl;
    else
    {
        

        j=0;
        for(i=0;i<26;i++)
        {
            if(ev[i]!=0)
            {
                while(ev[i]!=0)
                {
                    ev[i]-=2;
                    char ch=65+i;
                    st[j]=st[n-1-j]=ch;
                    j++;
                }
            }
        }
        ll odp;
        for(i=0;i<26;i++)
        {
            if(od[i]!=0)
            {
                odp=i;
                while(od[i]!=1)
                {
                    od[i]-=2;
                    char ch=65+i;
                    st[j]=st[n-1-j]=ch;
                    j++;
                }
            }
        }
        if(n%2==0)cout<<st<<endl;
        else
        {
            char ch=65+odp;
             st[n/2]=ch;
             cout<<st<<endl;
        }
    }
    
}