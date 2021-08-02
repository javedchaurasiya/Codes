#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin>>tt;
    for(int t=1;t<=tt;t++)
    {
        
        string st;
        cin>>st;
        ll ans=0,k=0,i;
        ll x=(ll)st.length();
        for(i=0;i<=x-4;i++)
        {
            if(st[i]=='K' && st[i+1]=='I' && st[i+2]=='C' && st[i+3]=='K')k++;
            if(st[i]=='S' && st[i+1]=='T' && st[i+2]=='A' && st[i+3]=='R' && st[i+4]=='T')
            {
                ans+=k;
            }
        }
        cout<<"Case #"<<t<<":"<<" "<<ans<<endl;

    }
}