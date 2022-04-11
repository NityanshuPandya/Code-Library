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
      for(ll i=0;i<n;++i)
      {
         ll x;
         cin>>x;
         a.eb(x);
      }
      sort(a.begin(),a.end());
      ll sum1=a[n-1],sum2=a[1]+a[0];
      if(sum2<sum1)
      {
         cout<<"YES\n";
         continue;
      }
      ll i=2;
      bool b=false;
      while(i<=n/2)
      {
         sum2+=a[i];
         sum1+=a[n-i];
         if(sum2<sum1)
         {
            b=true;
            break;
         }
         i++;
      }
      if(b)
      cout<<"YES\n";
      else
      cout<<"NO\n";
   }
   //cout << "Time taken: " << setprecision(10) << ((double)(clock() - tStart) / CLOCKS_PER_SEC) << " s" << endl;
   return 0;
}