#include<bits/stdc++.h>
#define ll long long
using namespace std;

//bitset<1000000001> m;
 
int main()
{
    ll n,i,j,ans=1;
    cin>>n;
    ll ar[n+1];
    ar[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>ar[i];
    }
   // ll k=*max_element(ar,ar+n+1);
    map<ll,ll> m;
    //ll *m=(ll*)calloc(k+1,sizeof(ll));
    i=j=1;
    while(j<=n)
    {
       // if(m[ar[j]]!=0 && i<=m[ar[j]])i=m[ar[j]]+1;
       i=max(i,m[ar[j]]+1);
        m[ar[j]]=j;
        //cout<<i<<" "<<j<<endl;
        ans=max(ans,(j-i+1));
        j++;
    }
    cout<<ans<<endl;
}