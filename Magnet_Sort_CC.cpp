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
   //clock_t tStart = clock();
   ll tc;
   cin >> tc;
   while (tc--)
   {
      ll n;
      cin>>n;
      vi a;
      string s;
      for(ll i=0;i<n;++i)
      {
         ll x;
         cin>>x;
         a.eb(x);
      }
      vi b=a;
      sort(a.begin(),a.end());
      cin>>s;
      ll cn=0,cs=0;
      for(auto ch:s)
      {
         if(ch=='N')
         cn++;
         else
         cs++;
      }
      if(a==b)
      {
         cout<<"0\n";
         continue;
      }
      if(cn==0 || cs==0)
      {
         cout<<"-1\n";
         continue;
      }
      if(s[0]!=s[n-1])
      {
         cout<<"1\n";
         continue;
      }
      ll q,w,e,r;
      for(ll i=0;i<n;++i)
      {
         if(s[i]!=s[0])
         {q=i;break;}
      }
      for(ll i=n-1;i>=0;--i)
      {
         if(s[i]!=s[n-1])
         {w=i;break;}
      }
      for(ll i=0;i<n;++i)
      {
         if(a[i]!=b[i])
         {e=i;break;}
      }
      for(ll i=n-1;i>=0;--i)
      {
         if(a[i]!=b[i])
         {r=i;break;}
      }
      if(q<=e || w>=r )
      {
         cout<<"1\n";
         continue;
      }
      cout<<"2\n";
   }
   //cout << "Time taken: " << setprecision(10) << ((double)(clock() - tStart) / CLOCKS_PER_SEC) << " s" << endl;
   return 0;
}