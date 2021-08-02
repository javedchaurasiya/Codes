#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,i;
    cin>>n;
    if(n==1) cout<<1<<endl;
    else if(n<4)puts("NO SOLUTION");
    else if (n==4)cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
    else
    {
        for(i=1;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        for(i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}