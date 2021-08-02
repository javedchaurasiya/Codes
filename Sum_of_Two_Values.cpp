#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;
//bitset<1000000001> h;

int main()
{
    ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);
    ll n,i,flag=0,x;
    cin>>n>>x;
    multimap<ll,ll> m;
    for(i=0;i<n;i++)
    {   ll a;
        cin>>a;
        m.insert(pair<ll,ll>(a,i+1));
    }
    auto it=m.begin();
    auto jt=m.end();
    jt--;
    while(1>0)
    {
        if(it==jt)
        {
            cout<<"IMPOSSIBLE"<<endl;
            break;
        }
        if(it->fi+jt->fi==x)
        {
            cout<<it->se<<" "<<jt->se<<endl;
            break;
        }
        else if(it->fi+jt->fi>x)
        {
            jt--;
        }
        else it++;
    }
}