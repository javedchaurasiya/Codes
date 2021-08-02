#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;


int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ull n;
        cin>>n;
        
        while(1>0)
        {
            string st=to_string(n);
            ll a=0,b=0;
            for(int i=0;i<st.length();i++)
            {
                if(st[i]-'0'!=0)a++;
                if(st[i]-'0'!=0 && (n%(st[i]-'0')==0))b++;
                
            }
            if(a==b)break;
            n++;
            
        }
        cout<<n<<endl;

    }
}