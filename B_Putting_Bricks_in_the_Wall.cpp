#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,i,j;
        cin>>n;
        char ar[n+1][n+1];
       ll ct=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cin>>ar[i][j];
            }
        }
       /*  for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        } */
        if(ar[1][2]==ar[2][1])
        {
            if(ar[n][n-1]==ar[1][2])ct++;
            if(ar[n-1][n]==ar[1][2])ct++;
            cout<<ct<<endl;
            if(ar[n][n-1]==ar[1][2])cout<<n<<" "<<n-1<<endl;
            if(ar[n-1][n]==ar[1][2])cout<<n-1<<" "<<n<<endl; 
        }
        else if(ar[n][n-1]==ar[n-1][n])
        {
            if(ar[1][2]==ar[n][n-1])ct++;
            if(ar[2][1]==ar[n][n-1])ct++;
            cout<<ct<<endl;
            if(ar[1][2]==ar[n][n-1])cout<<1<<" "<<2<<endl;
            if(ar[2][1]==ar[n][n-1])cout<<2<<" "<<1<<endl;;
        }
        else
        {
              cout<<2<<endl;
              if(ar[1][2]=='0')cout<<1<<" "<<2<<endl;
              if(ar[2][1]=='0')cout<<2<<" "<<1<<endl;
              if(ar[n][n-1]=='1')cout<<n<<" "<<n-1<<endl;
              if(ar[n-1][n]=='1')cout<<n-1<<" "<<n<<endl;
        }
    }
}