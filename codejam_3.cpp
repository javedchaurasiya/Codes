#include<bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp> 
// #include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define mll multiset<ll>
#define sll set<ll>
#define mpll map<ll,ll>
#define deb(x) cout<< #x <<":" <<" "<<x<<endl;
// #define pbdspair tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
// #define pbds tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
// using namespace __gnu_pbds;

vector<string> pre[8];
void fun(string st,int i)
{
    sort(all(st));
    do
    {
        pre[i].pb(st);
    } while (next_permutation(all(st)));
    
}
ll fun1(vll v)
{
       ll n,ans=0;
       n= v.size();
       vll mp(102,0);
       for( ll i=0 ; i<n ; i++)
       {
          mp[v[i]]=i;
       }
       vector<pair<ll,ll>> p;
       sort(all(v));
       for(ll i=0;i<n;i++)
       {
           ll x=mp[v[i]];
           for(auto j: p)
           {
               if(x>=j.fi && x<=j.se)
               {
                   x = j.se - x + j.fi  ;
               }
           }
           p.pb({i,x});
           ans += x - i +1;
       }
       return ans-1;
}

vll fun2(string st)
{
    vll v;
    // `cout<<st<<endl;
    for(int i=0;i<st.length();i++)
    {
        v.pb(st[i]-'0');
    }
    return v;
}

int main()
{
    fun("12",2);
    fun("123",3);
    fun("1234",4);
    fun("12345",5);
    fun("123456",6);
    fun("1234567",7);
    // for(int i=2;i<=7;i++)
    // {
    //     for(string x:pre[i])cout<<x<<" ";
    //     cout<<endl;
    // }
    ll tt;
    cin>>tt;
    for(int it=1;it<=tt;it++)
    {
        ll n,cost;
        cin>>n>>cost;
        ll flag=-1;
        vll ans;
        ll a;
        for(string x:pre[n])
        {
            ans=fun2(x);
            if(fun1(ans)==cost)
            {
                flag=1;
                break;
            }
            else continue;
        }
        if(flag==1)
        {
            cout<<"Case #"<<it<<": ";
            for(ll x:ans)cout<<x<<" ";
        }
        else
        {
            cout<<"Case #"<<it<<": ";
            cout<<"IMPOSSIBLE";
        }
        cout<<endl;
    }
}