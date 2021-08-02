#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;

int main()
{
    ll n,a,b,ans,i;
    cin>>n;
    multiset<pair<ll,ll>> s;
    multiset<pair<ll,ll>> :: iterator jt;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        s.insert({b,a});
    }
    int ar[n][2];
    i=0;
   for(auto it=s.begin();it!=s.end();++it)
   {
       ar[i][0]=it->fi;
       ar[i][1]=it->se;
       i++;
   }
   /* for(i=0;i<n;i++)
   {
       cout<<ar[i][0]<<" "<<ar[i][1]<<endl;
   } */
   ll st,et;
   st=et=0;
   ans=0;
   for(i=0;i<n;i++)
   {
       if(ar[i][1]>=et)
       {
           ans++;
           st=ar[i][1];
           et=ar[i][0];
       }
   }
   cout<<ans<<endl;
    
    
}