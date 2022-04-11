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
        vi a;
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            a.eb(x);
        }
        unordered_map<ll,ll> m;
        for(ll i=1;i<=30;i++)
        {
            for(ll j=0;j<n;++j)
            {
                if(a[j]>=(1<<(i-1)) && a[j]<(1<<i))
                m[i]++;
            }
        }
        ll cnt=0;
        for(auto x:m)
        {
            if(x.second>0)
            cnt+=(x.second*(x.second-1))/2;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}