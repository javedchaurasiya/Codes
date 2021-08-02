#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n,s,i;
    cin>>n;
    s=(n*(n+1))/2;
    if(s%2==1)cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        if(n%2==0)
        {
            cout<<n/2<<endl;

            for(i=1;i<=n/4;i++)
            {
                cout<<i<<" "<<n+1-i<<" ";
            }
            cout<<endl;
            cout<<n/2<<endl;
            for(i=n/4 +1;i<=n/2;i++)
            {
                cout<<i<<" "<<n+1-i<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<(n+1)/2<<endl;
            for(i=1;i<=(n+1)/4;i++)
            {
                cout<<i<<" "<<n-i<<" ";
            }
            cout<<endl;
            cout<<(n-1)/2<<endl;
            for(i=(n+1)/4 +1;i<=(n-1)/2;i++)
            {
                cout<<i<<" "<<n-i<<" ";
            }
            cout<<n<<endl;
        }
        
    }
}