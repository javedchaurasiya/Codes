#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
ll MOD = 1e9 + 7;
ll gcd(ll a, ll b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}
 
void solver()
{
	ll a,b,c,sum=0;
	cin>>a>>b>>c;
	sum+=(a+b+c);
	//cout<<sum<<"\n";
	if ((sum ) % 9 == 0 && a >= (sum) / 9 && b >= (sum ) / 9 && c>=(sum )/9)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	
}
int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	ll t = 1;
	cin>>t;
	while (t--)
	{
		solver();
	}
	return 0;
}