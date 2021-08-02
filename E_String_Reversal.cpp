#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define pb push_back

ll _mergeSort(ll arr[], ll temp[], ll left, ll right); 
ll merge(ll arr[], ll temp[], ll left, ll mid, ll right); 

ll mergeSort(ll arr[], ll array_size) 
{ 
	ll temp[array_size]; 
	return _mergeSort(arr, temp, 0, array_size - 1); 
} 
ll _mergeSort(ll arr[], ll temp[], ll left, ll right) 
{ 
	ll mid, inv_count = 0; 
	if (right > left) { 
		
		mid = (right + left) / 2; 
		inv_count += _mergeSort(arr, temp, left, mid); 
		inv_count += _mergeSort(arr, temp, mid + 1, right); 
		inv_count += merge(arr, temp, left, mid + 1, right); 
	} 
	return inv_count; 
} 
ll merge(ll arr[], ll temp[], ll left, 
		ll mid, ll right) 
{ 
	ll i, j, k; 
	ll inv_count = 0; 

	i = left;
	j = mid;
	k = left;
	while ((i <= mid - 1) && (j <= right)) { 
		if (arr[i] <= arr[j]) { 
			temp[k++] = arr[i++]; 
		} 
		else { 
			temp[k++] = arr[j++]; 
			inv_count = inv_count + (mid - i); 
		} 
	} 
	while (i <= mid - 1) 
		temp[k++] = arr[i++]; 
	while (j <= right) 
		temp[k++] = arr[j++]; 
	for (i = left; i <= right; i++) 
		arr[i] = temp[i]; 

	return inv_count; 
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,s,x,ans=0,j,flag=0;
    string st;
    cin>>n;
    cin>>st;
    vector<vector<ll>> v(26);
    vector<ll>::iterator it;
    string str;
    str=st;
    reverse(str.begin(),str.end());
    //cout<<str<<endl;
    for (i = 0; i < n; i++)
    {
        if(i<=n-2 && str[i]!=str[i+1])flag=1;
        x=str[i]-97;
        if(v[x].empty())v[x].pb(i);
        else
        {
            s=v[x].size();
            if(v[x][s-1]==i-1)v[x].pb(i-1);
            else v[x].pb(i);
        }
        
    }
    if(flag==1)
    {
        ll ar[n];
    for(i=0;i<n;i++)
    {
        x=st[i]-97;
        ar[i]=v[x][0];
        it=v[x].begin();
        v[x].erase(it);
    }
    /*for(i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(ar[j]<ar[i]) ans++;
        }
    }*/
    ans=mergeSort(ar,n);
    cout<<ans<<endl;
    }
    else cout<<0<<endl;
    //cout<<endl;
    
}