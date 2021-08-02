// name : Ritu Raj Shandilya
// roll no: 1901162
//mobile: 6203672394
//email : riturajyo147147@gmail.com
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ld long double
using namespace std;


int main()
{
//for fast input output and reading the input file and outputting it to the outputfile
ios_base::sync_with_stdio(false);
      cin.tie(NULL);
      cout.tie(NULL);
      #ifndef ONLINE_JUDGE
      freopen("Spaceships.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif

    ll n,i,j;
    ld x;
    cin>>n; //input for no. of spaceships
    vector<ld> v;
    vector<ld> ::iterator it;
    //input for the length of the ships
    for(i=0;i<n;i++)
    {
        cin>>x;
        v.pb(x);
    }
    //am: arithmetic mean maxi:to store maximum of the am's calculated so far
    ld am,maxi=0.00;
    //dp vector for storing the ans,sequence wise
    vector<ld> dp;
    //initializing dp with insering 0 first
    dp.pb(0.00);
    ll ind;
    while(!v.empty())
    {
         maxi=0.00;
         ind=0;
        if(v.size()>1)
        {
            for(i=0;i<v.size();i++)
            {
                if(i==0)am=v[i+1]/2;
                else if(i==v.size()-1)am=v[i-1]/2;
                else am=(v[i-1]+v[i+1])/2;
                if(am>maxi)
                {
                     maxi=am;
                     ind=i;
                }
            }
        }
        ld val=dp[dp.size()-1]+v[ind]+maxi;
        dp.pb(val);
        it=v.begin();
        it+=ind;
        v.erase(it);
    }
    cout<<setprecision(10)<<dp[dp.size()-1]<<endl;
}