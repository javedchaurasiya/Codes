#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp>
#define ll long long
#define ull unsigned long long
#define all(v) v.begin(),v.end()
#define fi first
#define se second
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define pob pop_back
#define vll vector<ll>
#define mll multiset<ll>
#define sll set<ll>
#define mpll map<ll,ll>
#define deb(x) cout<< #x <<":" <<" "<<x<<endl;
#define pbdspair tree<pair<ll,ll>, null_type,less<pair<ll,ll>>, rb_tree_tag,tree_order_statistics_node_update>
#define pbds tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
using namespace __gnu_pbds;

list<string> permutations(string s)
{
    // create an empty list to store (partial) permutations and
    // initialize it with first character of the string
    list<string> partial;
 
    string firstChar(1, s[0]);
    partial.push_back(firstChar);
 
    // do for every character of the specified string
    for (int i = 1; i < s.length(); i++)
    {
        // consider previously constructed partial permutation one by one
        for (int j = partial.size() - 1; j >= 0; j--)
        {
            // remove current partial permutation from the list
            string str = partial.front();
            partial.pop_front();
 
            // Insert next char of the specified string i.e. s.charAt(i)
            // in all possible positions of current partial permutation.
            // Then insert each of these newly constructed string in list
            for (int k = 0; k <= str.length(); k++)
                partial.push_back(str.substr(0, k) + s[i] + str.substr(k));
        }
    }
 
    // The list now contains all permutations of the given string
    /* for (string s: partial)
        cout << s << ' ' ; */
        return partial;
}

int main()
{
    ll tt=1;
    //cin>>tt;
    while(tt--)
    {
        ll mod=998244353;
      ll n;
      cin>>n;
      string s;
      cin>>s;
      vll m(n+1,0);
      for(int i=0;s[i];i++)
      {
          if(s[i]=='1')m[i+1]=1;
      }
      vll v(n,0);
      for(int i=0;i<n;i++)
      {
          v[i]=i+1;
      }
      vll k(n,0);
      string st="";
      char ch='a';
      for(int i=0;i<n;i++)
      {
          st.pb(ch);
          ch++;
      }

     /*  do
      {
          
          ll res=0;
          for(int i=1;i<n;i++)
          {
              if(v[i]%v[i-1]==0 && m[v[i]/v[i-1]]==1)res++;
          }
          k[res]=(k[res]+1)%mod;;
      } while (next_permutation(all(v)));*/
      //cout<<11<<endl;
      list<string> par=permutations(st);
      for(string x : par)
      {
          ll res=0;
          for(int i=1;i<n;i++)
          {
              ll p1=x[i]-'a'+1;
              ll p0=x[i-1]-'a'+1;
              if(p1%p0==0 && m[p1/p0]==1)res++;
          }
          k[res]++;

      }
      for(int i=0;i<n;i++)
      {
          cout<<k[i]<<" ";
      }
      cout<<endl;
      
            

    }
}