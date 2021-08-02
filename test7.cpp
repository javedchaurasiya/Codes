#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstring>
#include <climits>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <bitset>
#include <utility>
#include <iomanip>
#include <time.h>
#include <iterator>
using namespace std;
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define ll long long
#define prDouble(x) cout << fixed << setprecision(6) << x
#define PB push_back
#define MP make_pair
#define ff first
#define ss second
//vector<vector<char>>a(n,vector<char>(m));
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define fo(i, a, n) for (i = (a); i < (n); i++)
#define tr(it, a) for (auto it = a.begin(); it != a.end(); ++it)
#define clr(a, b) memset(a, b, sizeof(a)) //it is for array
typedef vector<ll int> VI;
const long long mod = 1e9 + 7;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   ll int n, i, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, sum, count = 0;
   cin >> n;
   VI a(n);
      ll ans=0;
       ll mod=998244353;
   fo(i, 0, n)
    cin >>a[i];
   fo(x1, 0, 17)
   {
      fo(x2, 0, 17)
      {
         fo(x3, 0, 17)
         {
            fo(x4, 0, 17)
            {
               fo(x5, 0, 17)
               {
                  fo(x6, 0, 17)
                  {
                     fo(x7, 0, 17)
                     {
                        // fo(x8, 0, 17)
                        // {
                        //    fo(x9, 0, 17)
                        //    {
                        //       fo(x10, 0, 17)
                        //       {
                           //       if (n ==10)
                           //       {
                           //          sum = x1 * a[0] + x2 * a[1] + x3 * a[2] + x4 * a[3] + x5 * a[4] + x6 * a[5] + x7 * a[6] + x8 * a[7] + x9 * a[8] + x10 * a[9];
                           //          if (sum % 17 == 0)
                           //             count++;
                           //       }
                           //    }
                           //    else if (n == 9)
                           //    {
                           //       sum = x1 * a[0] + x2 * a[1] + x3 * a[2] + x4 * a[3] + x5 * a[4] + x6 * a[5] + x7 * a[6] + x8 * a[7] + x9 * a[8];
                           //       if (sum % 17 == 0)
                           //          count++;
                           //    }
                           // }
                           // else if(n == 8)
                           // {
                        //       sum = x1 * a[0] + x2 * a[1] + x3 * a[2] + x4 * a[3] + x5 * a[4] + x6 * a[5] + x7 * a[6] + x8 * a[7];
                        //       if (sum % 17 == 0)
                        //          count++;
                        //    }
                        // }
                        
                        // else if (n == 7)
                        
                           sum = x1 * a[0] + x2 * a[1] + x3 * a[2] + x4 * a[3] + x5 * a[4] + x6 * a[5] + x7 * a[6];
                           if (sum % 17== 0&& x1!=x2 &&x1!=x4 &&x1!=x5&&x1!=x6 && x1!=x7 && x2!=x3 && x2!=x4&& x2!=x5&& x2!=x6&& x2!=x7&& x3!=x1&& x3!=x4&& x3!=x5&& x3!=x6&& x3!=x7&& x4!=x5&& x4!=x6&& x4!=x7&& x5!=x6&& x5!=x7&&x6!=x7)
                               ans++;
                               //cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<" "<<
                        }
                     }
                  }
               }
            }
         }
      }
      cout<<ans<<endl;

      //                }
                     
      //                else if (n == 6)
      //                {
      //                   sum = x1 * a[0] + x2 * a[1] + x3 * a[2] + x4 * a[3] + x5 * a[4] + x6 * a[5];
      //                   if (sum % 17 == 0)
      //                      count++;
      //                }
      //             }

      //             else if (n == 5)
      //             {
      //                sum = x1 * a[0] + x2 * a[1] + x3 * a[2] + x4 * a[3] + x5 * a[4];
      //                if (sum % 17 == 0)
      //                   count++;
      //             }
      //          }
      //          else if (n == 4)
      //          {
      //             sum = x1 * a[0] + x2 * a[1] + x3 * a[2] + x4 * a[3];
      //             if (sum % 17 == 0)
      //                count++;
      //          }
      //       }
            
      //       else if (n == 3)
      //       {
      //          sum = x1 * a[0] + x2 * a[1] + x3 * a[2];
      //          if (sum % 17 == 0)
      //             count++;
      //       }
      //    }
      //    else if (n == 2)
      //    {
      //       sum = x1 * a[0] + x2 * a[1];
      //       if (sum % 17 == 0)
      //          count++;
      //    }
      // }
      // else if (n == 1)
      // {
      //    sum = x1 * a[0];
      //    if (sum % 17 == 0)
      //       count++;
      // }
   }
   // cout<<count<<"\n";