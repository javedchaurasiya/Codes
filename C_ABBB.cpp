#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,l=0,rem=0,i=0;
        string st;
        cin>>st;
        /* for(i=0;i<st.length();i++)if(st[i]=='B')break;
        l=i-0; */
        while(i<=n-1)
        {
            if(st[i]=='A')
            {
                l++;
                i--;
            }
            else
            {
                if(l>0)
                {
                    l--;
                    i++;
                    rem+=2;
                }
                else
                {
                    if(st[i+1]=='B')
                    {
                        i+=2;
                        rem+=2;
                    }
                }
                
            }
        }
        cout<<st.length()-rem<<endl;
    }
}