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
      ll n;
      cin>>n;
      vi v;
      for(ll i=0;i<n;++i)
      {
         ll x;
         cin>>x;
         v.eb(x);
      }
      for(ll i=1;i<n;++i)
      {
         if(i%3==1)
         v[i]=2*v[i-1];
         if(i%3==2 && i<n-1)
         v[i]=2*v[i+1];
         if(i%3==2 && i==n-1)
         v[i]=v[i-1];
      }
      for(auto x:v)
      {
         cout<<x<<" ";
      }
      cout<<'\n';
   }
   return 0;
}