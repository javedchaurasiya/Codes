#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
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
#define pbdspair tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
#define pbds tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n;
        cin>>n;
        if(n==1)
        {
            ll m;
            cin>>m;
            string st="";
            ll lt=0,rt=0;
            for(int i=0;i<m;i++)
            {
                ll x;
                cin>>x;
                if(x>0)rt++;
                else lt++;
            }
            ll ans=0;
            ans=lt*rt;
            /* while(1>0)
            {
                ll found=0;
                for(int i=0;i<m-1;i++)
                {
                    if(st[i]=='>' && st[i+1]=='<')
                    {
                        found=1;
                        st[i]='<';
                        st[i+1]='>';
                        //break;
                        ans++;
                    }
                }
                if(found==0)break;
               // ans++;
            } */
            cout<<ans<<endl;
        }
    }
}