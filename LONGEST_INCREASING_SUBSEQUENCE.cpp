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
ll LIS(vi &a,ll n)
{
   vi lis(n+1,1);
   for(ll i=1;i<n;++i)
   {
      for(ll j=0;j<=i-1;++j)
      {
         if(a[j]<a[i] && lis[i]<lis[j]+1)
         {
            lis[i]++;
         }
      }
   }
   ll mx=0;
   for(ll i=1;i<n;++i)
   {
      mx=max(mx,lis[i]);
   }
   return mx;
}
vi lis(vi &a,ll n)
{
   vi lis(n+1,1),v;
   for(ll i=1;i<n;++i)
   {
      for(ll j=0;j<=i-1;++j)
      {
         if(a[j]<a[i] && lis[i]<lis[j]+1)
         {
            lis[i]++;
         }
      }
   }
   ll mx=0;
   for(ll i=1;i<n;++i)
   {
      mx=max(mx,lis[i]);
   }
   ll i=n-1;
   while(i>=0)
   {
      if(mx==lis[i])
      {
         v.eb(a[i]);
         mx--;
      }
      i--;
   }
   reverse(v.begin(),v.end());
   return v;
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
      vi a;
      for(ll i=0;i<n;++i)
      {
         ll x;
         cin>>x;
         a.eb(x);
      }
      ll len_lis=LIS(a,n);
      cout<<len_lis<<'\n';
      vi Lis=lis(a,n);
      for(auto x:Lis)
      {
         cout<<x<<' ';
      }
      cout<<'\n';
   }
   return 0;
}