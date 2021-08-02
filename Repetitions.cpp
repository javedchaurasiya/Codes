#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    string st;
    getline(cin,st);
    ll i,c=0,max=0;
    char ch=st[0];
    for(i=0;i<st.length();i++)
    {
        
        if(st[i]==ch)
        {
            c++;
            ch=st[i];
        }
        else
        {
            c=1;
            ch=st[i];
        }
        if(max<c) max=c;
    }
    cout<<max<<endl;
}