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
      string s;
      cin>>s;
      string r=s;
      reverse(r.begin(),r.end());
      ll cnt=0;
      for(ll i=0;i<s.size();++i)
      {
         if(s[i]==r[cnt])
         cnt++;
      }
      cout<<s.size()-cnt<<'\n';
   }
   return 0;
}