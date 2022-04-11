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
      if(n==2)
      {
         cout<<"-1\n";
         continue;
      }
      if(n%2==1)
      {
         for(ll i=1;i<=n;++i)
         {
            cout<<i<<' ';
         }
         cout<<'\n';
      }
      else{
         cout<<"2 3 1 4 ";
         for(ll i=5;i<=n;++i)
         {
            cout<<i<<' ';
         }
         cout<<'\n';
      }
   }
   //cout << "Time taken: " << setprecision(10) << ((double)(clock() - tStart) / CLOCKS_PER_SEC) << " s" << endl;
   return 0;
}