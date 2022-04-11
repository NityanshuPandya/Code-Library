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
ll su(ll n,ll x)
{
    ll res = 0;
    for (ll i = 1; i <= sqrt(n); i++)
    {
         if(res>x)
         break;
        if(n % i == 0) {
            res+=i;
            if(n/i!=i)
            res+=(n/i);
        }
    }
    return res;
}
int main()
{
    setIO("");
    ll tc;
    cin >> tc;
    ll sum=0;
    while (tc--)
    {
        ll x,a,b;
        cin>>x>>a>>b;
        ll y=x*b/a;
        if(x%a==0)
        {
            if(su(y,x)==x)
            cout<<y<<'\n';
            else
            cout<<"-1\n";
        }
        else
        cout<<"-1\n";
        
    }
    return 0;
}