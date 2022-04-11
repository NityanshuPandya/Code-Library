#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<long long int>;
#define mp make_pair
#define eb emplace_back
const int M = 1000000007;
void setIO(string s)
{
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   cout.tie(nullptr);
   if (s.size())
   {
      freopen((s + ".in").c_str(), "r", stdin);
      freopen((s + ".out").c_str(), "w", stdout);
   }
}
int main()
{
   setIO("");
   ll tc;
   cin >> tc;
   while (tc--)
   {
      ll n,x;
      cin>>n>>x;
      vi p(n+1,-1e9),ans(n+1,-1e9);
      p[0]=0;
      for(ll i=1;i<=n;++i)
      {
         ll a;
         cin>>a;
         p[i]=p[i-1]+a;
      }
      for(ll i=1;i<=n;++i)
      {
         for(ll j=1;i+j-1<=n;++j)
         {
           ans[i]=max(ans[i],p[i+j-1]-p[j-1]); 
         }
      }
      ll mx=0;
      for(ll i=0;i<=n;++i)
      {
         for(ll j=i;j<=n;++j)
         {
            mx=max(mx,ans[j]+(i*x));
         }
         cout<<mx<<' ';
      }
      cout<<'\n';
   }
   return 0;
}