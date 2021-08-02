#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll n,x,a,i,j,ans=0;
    cin>>n>>x;
    vector<ll> v;
    vector<ll> ::iterator it,jt;
    //vector<ll> ::reverse_iterator jt;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),greater<ll>());
    i=0;
    j=n-1;
    while(1>0)
    {
        if(j<i)break;
        if(i==j)
        {
            ans++;
            break;
        }
        else
        {
            if(v[i]+v[j]<=x)
            {
                ans++;
                i++;
                j--;
            }
            else
            {
                ans++;
                i++;
            }
            
        }
    }
    cout<<ans<<endl;
}