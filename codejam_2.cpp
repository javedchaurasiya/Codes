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

int main()
{
    ll tt;
    cin>>tt;
    for(int it=1;it<=tt;it++)
    {
        ll x,y;
        ll ans=0;
        string st;
        cin>>x>>y;
        cin>>st;
        ll ct=0;
        for(int i=0;i<st.length();i++)
        {
            if(st[i]=='?')ct++;
        }
        if(ct==st.length())ans=0;
        else
        {
            while(st[0]=='?')
        {
            st.erase(0,1);
        }
        char pre='o';
        for(int i=0;i<st.length();i++)
        {
            if(st[i]=='?')
            {
                st[i]=pre;
            }
            else
            {
                pre=st[i];
            }
        }
        
        // cout<<st<<endl;
        for(int i=0;i<st.length()-1;i++)
        {
            if(st[i]=='C' && st[i+1]=='J')ans+=x;
            else if(st[i]=='J' && st[i+1]=='C')ans+=y;
        }
        
        }
        cout<<"Case #"<<it<<": "<<ans<<endl;
    }
}