#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,i=0,s=1,ans=0,t;
        cin>>n;
        string st;
        string ::iterator it;
        
        cin>>st;
        it=st.begin();
        ll l=0;
        while(1>0)
        {
            if(i<=n-2 && st[i]==st[i+1])s++;
            else
            {
                if(s==1)l++;
            if(s>1)
            {
                if(s-l==1)
                {
                    ans+=l;
                    l=1;
                    s=1;
                }
                else if(s-l>1)
                {
                    ans+=l+1;
                    l=0;
                    s=1;
                }
                else if(s<=l)
                {
                    t=s-1;
                    ans+=t;
                    l+=1-t;
                    s=1;
                }
            }
            }
            
            i++;
            if(i>n-1)break;
        }
        //cout<<l<<endl;
        ans+=(l+1)/2;
        cout<<ans<<endl;
        
    }
}