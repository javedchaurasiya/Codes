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

char reVal(int num) 
{ 
	if (num >= 0 && num <= 9) 
		return (char)(num + '0'); 
	else
		return (char)(num - 10 + 'A'); 
} 

// Utility function to reverse a string 
void strev(char *str) 
{ 
	int len = strlen(str); 
	int i; 
	for (i = 0; i < len/2; i++) 
	{ 
		char temp = str[i]; 
		str[i] = str[len-i-1]; 
		str[len-i-1] = temp; 
	} 
}

char* ter(char res[], int base, int inputNum) 
{ 
	int index = 0; // Initialize index of result 

	// Convert input number is given base by repeatedly 
	// dividing it by base and taking remainder 
	while (inputNum > 0) 
	{ 
		res[index++] = reVal(inputNum % base); 
		inputNum /= base; 
	} 
	res[index] = '\0'; 

	// Reverse the result 
	strev(res); 

	return res; 
} 

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,pr;
        cin>>n>>pr;
        vll p(n+1);
        p[1]=1;
        for(int i=2;i<=n;i++)
        {
            cin>>p[i];
        }
        vll c(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>c[i];
        }
        vll anc[n+1];
        for(int i=1;i<=n;i++)
        {
            ll x=i;
            while(1>0)
            {
                if(x==1)
                {
                    //anc[i].pb(1);
                    break;
                }
                anc[i].pb(p[x]);
                x=p[x];
            }
            anc[i].pb(i);
            sort(all(anc[i]));
        }
        /* for(int i=1;i<=n;i++)
        {
            cout<<i<<" :";
            for(int j : anc[i])cout<<j<<" ";
            cout<<endl;
        } */

        vll mat[n+1][n+1];
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
            {
                vll v1=anc[i];
                for(int k=i;k<=n;k++)
                {
                    vll v2=anc[k];
                    vll v3(v1.size()+v2.size());
                    auto it=set_intersection(all(v1),all(v2),v3.begin());
                    it--;
                    if(it!=v3.end() && *it==j)mat[i][j].pb(*it);
                   
                    
                }
            }
        }
        ll to=pow(3,n);
        string v[to];
        char res[100];
        for(int i=0;i<to;i++)
        {
            v[i]=ter(res,3,i);
            cout<<v[i]<<endl;
        }

        
    }
}