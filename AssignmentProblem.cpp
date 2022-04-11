#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<long long int>;
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
        vector<vector<ll>> cost;
        for(ll i=0;i<n;++i)
        {
            vector<ll> vi;
            for(ll j=0;j<n;++j)
            {
                ll x;
                cin>>x;
                vi.eb(x);
            }
            cost.eb(vi);
        }
        vector<ll> dp((1<<n),INT_MAX);
        dp[0]=0;
        for(ll i=0;i<(1<<n);++i)
        {
            ll x=__builtin_popcount(i);
            for(ll j=0;j<n;++j)
            {
                if(!(i&(1<<j)))
                {
                    dp[i|(1<<j)]=min(dp[i|(1<<j)],dp[i]+cost[x][j]);
                }
            }
        }
        for(auto &it:dp)
        {
            cout<<it<<' ';
        }
        cout<<'\n'<<dp[(1<<n)-1];
    }
    return 0;
}