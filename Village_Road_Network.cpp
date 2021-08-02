#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct cell { 
    ll x, y; 
    ll cost; 
    cell() {} 
    cell(ll x, ll y, ll cost) 
        : x(x), y(y), cost(cost) 
    { 
    } 
}; 


ll check(ll a,ll b)
{
    ll xco,yco;
    xco=abs(a),yco=abs(b);
    if(__gcd(xco,yco)==1 && xco%2==1 && yco%2==1) return 1;
    else return 0;
}
void solve(ll a,ll b,ll c,ll d)
{
    //set<pair<ll,ll>> s;
    //map<pair<ll,ll>,ll> s;
    ll ans=LLONG_MAX,i,xco,yco;
    queue<cell> qq;
    cell cc;
    cc.x=a;
    cc.y=b;
    cc.cost=0;
    qq.push(cc);
    //s.insert(pair<pair<ll,ll>,ll>({a,b},1));
    while(!qq.empty())
    {
        cc=qq.front();
        qq.pop();
        if(cc.x==c && cc.y==d && ans>cc.cost)
        {
            /*cout<<cc.cost<<endl;
            return;*/
            ans=cc.cost;
        }
        if(cc.cost<=5)
        {
           
            
                 
                 
                     //east
                     xco= cc.x+ 2*(cc.y);
                     yco= cc.y;
                 
                 if(check(xco,yco)==1)
                 {
                     qq.push(cell(xco,yco,cc.cost +1));
                 }
                 
                     //west
                     xco=cc.x - 2*(cc.y);
                     yco=cc.y;
                 
                 if(check(xco,yco)==1)
                 {
                     qq.push(cell(xco,yco,cc.cost +1));
                 }
                 
                     //north
                     xco=cc.x;
                     yco=2*(cc.x) + cc.y;
                     if(yco<0)
                     {
                         xco*=-1;
                         yco*=-1;
                     }
                 
                 if(check(xco,yco)==1)
                 {
                     qq.push(cell(xco,yco,cc.cost +1));
                 }
                 
                     //south
                     xco=cc.x;
                     yco=cc.y - 2*(cc.x);
                     if(yco<0)
                     {
                         xco*=-1;
                         yco*=-1;
                     }
                 
                 
                 if(check(xco,yco)==1)
                 {
                     qq.push(cell(xco,yco,cc.cost +1));
                 }
                 
            
        }
    }
    cout<<ans<<endl;
}
int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==c && b==d) cout<<0<<endl;
       else solve(a,b,c,d);
    }
}