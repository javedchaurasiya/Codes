#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,a,b,c,u;
        cin>>n;
        u=n%10;
        switch(u)
        {
            case 0 :
            a=0,b=n/5;c=0;
            cout<<a<<" "<<b<<" "<<c<<endl;
            break;
            case 1 :
            if(n<11)cout<<-1<<endl;
                else
                {
                    a=2;
                n-=6;
                b=n/5;
                c=0;
                cout<<a<<" "<<b<<" "<<c<<endl;
                }
                
            break;
            case 2 : 
            if(n<12)cout<<-1<<endl;
            else
            {
                a=4;
                n-=12;
                b=n/5;
                c=0;
                cout<<a<<" "<<b<<" "<<c<<endl;
            }
            break;
            case 3 : 
            a=1;
            n-=3;
            b=n/5;
            c=0;
            cout<<a<<" "<<b<<" "<<c<<endl;
            break;
            case 4 :
            if(n<14)cout<<-1<<endl;
            else
            {
                a=0;
                c=2;
                n-=14;
                b=n/5;
                cout<<a<<" "<<b<<" "<<c<<endl;
            }
            break;
            case 5 :
            a=0,b=n/5,c=0;
            cout<<a<<" "<<b<<" "<<c<<endl;
            break;
            case 6 :
            a=2;
            n-=6;
            b=n/5;
            c=0;
            cout<<a<<" "<<b<<" "<<c<<endl;
            break;
            case  7 :
            a=0;
            c=1;
            n-=7;
            b=n/5;
            cout<<a<<" "<<b<<" "<<c<<endl;
            break;
            case 8 :
            if(n<=8)
            {
                a=1,b=1,c=0;
                cout<<a<<" "<<b<<" "<<c<<endl;
            }
            else
            {
                a=6;
                n-=18;
                b=n/5;
                c=0;
                cout<<a<<" "<<b<<" "<<c<<endl;
            }
            break;
            case 9 :
            a=3;
            n-=9;
            b=n/5;
            c=0;
            cout<<a<<" "<<b<<" "<<c<<endl;
            break;
        }
    }
}