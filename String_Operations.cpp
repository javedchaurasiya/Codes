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
        set<pair<ll,pair<ll,pair<ll,ll>>>> s;
        string st;
        cin>>st;
        ll n=st.length(); 
        vector<vector<pair<ll,pair<ll,ll>>>> res(n,vector<pair<ll,pair<ll,ll>>>(n));
        for(int i=0;i<n;i++)
        {
            ll od=0,ev=0,zc=0,oc=0;
            for(int j=i;j<n;j++)
            {
                 if(st[j]=='0')
                 {
                     zc++;
                     if(oc%2==0)ev++;
                     else od++;
                    
                 }
                 else oc++;

                  res[i][j]={zc,{ev,od}};
            }
        }
         /* for(int i=0;i<=n;i++)
        {
            cout<<va[i].fi<<" "<<va[i].se<<endl;

        }
        cout<<endl; */ 
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                /* string xx="";
                copy(st.begin()+i,st.begin()+j+1,back_inserter(xx));
                ll len=xx.length(); */
                ll len=j-i+1;
                ll zc=res[i][j].fi;
                ll ev=res[i][j].se.fi;
                ll od=res[i][j].se.se;
                /* for(int k=0;k<len;k++)
                {
                    if(xx[k]=='0')
                    {
                        if(oc%2==0)ev++;
                        else od++;
                        zc++;
                    }
                    else oc++;
                } */
               // cout<<i<<" "<<j<<" "<<ev<<" "<<od<<endl;

                s.insert({len,{zc,{ev,od}}});
            }
        }
        ll ans=s.size();
        cout<<ans<<endl;
    }
}