#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<long long int>;
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
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
        ll x,y;
        cin>>x;
        ll i=0;
       while((1<<i)<=x)
       {
           ++i;
       }
       if((1<<i)-1==x)
       {
           ++i;
           y=(1<<i)-1;
       }
       else
       {
           y=(1<<i)-1;
       }
       cout<<"0 "<<x<<' '<<y<<'\n';
    }
    return 0;
}