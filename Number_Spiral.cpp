#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin>>tt;
    while (tt--)
    {
        ll r,c,s;
        cin>>r>>c;
        if(r==c)cout<<r*c - r+1<<endl;
        else if(r>c)
        {
            if(r%2==0)cout<<r*r-c+1<<endl;
            else
            {
                s=(r-1)*(r-1) +c; 
                cout<<s<<endl;
            }
        }
        else
        {
            if(c%2==1)cout<<c*c -r+1<<endl;
            else
            {
                s=(c-1)*(c-1) +r;
                cout<<s<<endl;
            }
            
        }
        

    }
    
}