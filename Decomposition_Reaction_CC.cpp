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
    ll n,m;
    cin>>n>>m;
    vi q;
    for(ll i=0;i<n;++i)
    {
        ll x;
        cin>>x;
        q.eb(x);
    }
    for(ll i=0;i<m;++i)
    {
        ll c,x;
        cin>>c>>x;
        for(ll j=0;j<x;++j)
        {
            ll a,b;
            cin>>a>>b;
            q[b-1]=(q[b-1]+(q[c-1]*a)%M)%M;
        }
        q[c-1]=0;
    }
    for(ll i=0;i<n;++i)
    {
        cout<<q[i]<<'\n';
    }
    return 0;
}