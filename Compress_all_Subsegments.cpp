#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

ll bc(ll n)
{
    ll ans = (int)log2(n) +1;
    return ans;
}

int main()
{
    ll n,x,sum=0,ans=0,i,j,m,k,t,c;
    cin>>n;
    vector<ll> v;
    for(i=0;i<n;i++)
    {
        cin>>x;
        sum += x;
        v.pb(x);
    }
    for(i=0;i<n;i++)
    {
        m=v[i];
        x=bc(v[i]);
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(bc(v[j])<=x)
            {
                if(bc(v[j])==x)
                {
                    c++;
                    m=min(v[j],m);
                }
                
                if(c%2==0)
                {
                    k=abs(m -(ll)pow(2,x-1));
                    t=(ll)log2(k);
                   // cout<<(ll)pow(2,t)<<endl;
                    ans += (ll)pow(2,t);
                }
                else
                {
                    //cout<<(ll)pow(2,x-1)<<endl;
                    ans += (ll)pow(2,x-1);
                }
            }
            else
            {
                m=v[j];
                x=bc(v[j]);
                c=1;
                ans += (ll)pow(2,x-1);
            }
            cout<<ans<<endl;

        }
    }
    cout<<sum+ans<<endl;

}

