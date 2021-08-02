#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long


using namespace std;
vector<ull> count(vector<ull> v,ull k,ull n)
{
    set<ull> s;
    //ull sum=0;
    vector<ull> ans;
    ull i;
    for( i=0;i<v.size();i++)
    {
        if(s.find(v[i])==s.end())
        {
            ans.push_back(v[i]);
            s.insert(v[i]);
            
        }
    }
    for(i=1;i<=n;i++)
    {
        if(ans.size()==k) break;
        else if(s.find(i)==s.end())
        {
            ans.push_back(i);
        }
    }
    return ans;
    
    
}

int main()
{
    ull tt;
    cin>>tt;
    while(tt--)
    {
        ull n,k,i;
        cin>>n>>k;
        vector<ull> v,ans;
        for(i=0;i<n;i++)
        {
            ull x;
            cin>>x;
            v.push_back(x);
        }
        ans=count(v,k,n);;
        if(ans.size()>k) cout<<-1<<" ";
        else
        {
        cout<<n*n<<endl;
        for(i=0;i<n*n;i++)
        {
            cout<<ans[i%ans.size()]<<" ";
        }
        }
        cout<<endl;
    }
}