#include<bits/stdc++.h>
#define ll long long
#define fi first
#define se second
using namespace std;

int main()
{
    ll n,i,x,y,k;
    cin>>n;
    multiset<pair<ll,ll>> s;
    //multiset<pair<ll,ll>>:: iterator it;
    multimap<pair<ll,ll>,ll> m;
    vector<ll> v(n+1,0);
    for(i=0;i<n;i++)
    {

        cin>>x>>y;
        s.insert({x,y});
        m.insert(pair<pair<ll,ll>,ll>({x,y},i+1));
    }
    ll room=1;
    while(!s.empty())
    {
        
       auto it=s.begin();
        while(1>0)
        {
            if(it==s.end())break;
            x=it->fi;
            y=it->se;
            
            auto jt=m.find({x,y});
            k=jt->se;
            //cout<<"Index"<<" :"<<k<<" "<<x<<" "<<y<<" ";
            v[k]=room;
            m.erase(jt);
            s.erase(it);
            it=s.lower_bound({y+1,y+1});
        }
        room++;
    }
    //cout<<endl;
    cout<<room-1<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<v[i]<<" ";
    }
}