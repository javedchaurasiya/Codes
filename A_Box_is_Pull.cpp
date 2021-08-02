#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll x,y,x1,y1,a=0;
        cin>>x>>y>>x1>>y1;
        if(x==x1 && y==y1)cout<<0<<endl;
        else if(x==x1)
        {
            a=(ll)abs(y-y1);
            cout<<a<<endl;
        }
        else if(y==y1)
        {
            a=(ll)abs(x-x1);
            cout<<a<<endl;

            
        }
        else
        {
            a=(ll)abs(y1-y)+(ll)abs(x-x1)+2;
            cout<<a<<endl;


        }
        
        
    }
}