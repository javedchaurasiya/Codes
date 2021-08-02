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
        ll n,m;
        cin>>n>>m;
        ll a,b;
        a=b=0;
        vll v1(n);
        vll v2(m);
        for(int i=0;i<n;i++)
        {
            cin>>v1[i];
            a+=v1[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>v2[i];
            b+=v2[i];
        }
        sort(all(v1));
        sort(all(v2));
        /* deb(a);
        deb(b); */
        ll i,j;
        i=0;j=m-1;
        ll ans=0;
        ll flag=-1;
        while(i<=n-1 && j>=0)
        {
            if(a>b)
            {
                //flag=1;
                break;
            }
            a+=v2[j]-v1[i];
            b+=v1[i]-v2[j];
            i++;
            j--;
            ans++;
        }
        if(a<=b)cout<<-1<<endl;
        else cout<<ans<<endl;
    }
}