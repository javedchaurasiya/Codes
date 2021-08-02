#include<bits/stdc++.h>
#define nper next_permutation
#define ll long long
using namespace std;
int main()
{
    string st;
    cin>>st;
    sort(st.begin(),st.end());
    ll n=0;
    string str=st;
    do
    {
        n++;
    } while (nper(str.begin(),str.end()));
    cout<<n<<endl;
    do
    {
        cout<<st<<endl;
    } while (nper(st.begin(),st.end()));
    

}
