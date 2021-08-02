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

int findMin(vll arr, int n)
{
	// Calculate sum of all elements
	int sum = 0; 
	for (int i = 0; i < n; i++)
		sum += arr[i];

	// Create an array to store results of subproblems
	bool dp[n+1][sum+1];

	// Initialize first column as true. 0 sum is possible 
	// with all elements.
	for (int i = 0; i <= n; i++)
		dp[i][0] = true;

	// Initialize top row, except dp[0][0], as false. With
	// 0 elements, no other sum except 0 is possible
	for (int i = 1; i <= sum; i++)
		dp[0][i] = false;

	// Fill the partition table in bottom up manner
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=sum; j++)
		{
			// If i'th element is excluded
			dp[i][j] = dp[i-1][j];

			// If i'th element is included
			if (arr[i-1] <= j)
				dp[i][j] |= dp[i-1][j-arr[i-1]];
		}
	}

	// Initialize difference of two sums. 
	int diff = INT_MAX;
	
	// Find the largest j such that dp[n][j]
	// is true where j loops from sum/2 t0 0
	for (int j=sum/2; j>=0; j--)
	{
		// Find the 
		if (dp[n][j] == true)
		{
			diff = sum-2*j;
			break;
		}
	}
	return diff;
}

int main()
{
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll n,k;
        cin>>n>>k;
        vll v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(all(v),greater<ll>());
        ll ind=-1;
        ll sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=v[i];
            if(sum>=2*k)
            {
                ind=i;
                break;
            }
            
        }
        //deb(ind);
        if(ind==-1)cout<<-1<<endl;
        else
        {
            vll pre(n,0);
        ll sm=0;
        for(int i=0;i<n;i++)
        {
            sm+=v[i];
            pre[i]=sm;
        }
        vll v1;
        ll flag=-1;
        ll ans=0;
        while(ind<=n-1)
        {
            //if(flag==1 || ind>n-1)break;
            v1.clear();
            copy(v.begin(),v.begin()+ind+1,back_inserter(v1));
            ll d=findMin(v1,v1.size());
            ll a=(pre[ind]+d)/2;
            ll b=pre[ind]-a;
           // deb(a);
           // deb(b);
            if(a>=k && b>=k)
            {
                ans=ind;
                flag=1;
                break;
            }          
            ind++;
        }
        if(flag==-1)cout<<-1<<endl;
        else cout<<ans+1<<endl;
        }
        
    }
}