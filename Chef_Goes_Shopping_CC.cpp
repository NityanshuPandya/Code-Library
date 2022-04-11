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
        vi r,l,m(n);
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            l.eb(x);
        }
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            r.eb(x);
        }
        if(n==1)
        {
            cout<<"0\n";
            continue;
        }
        if(n==2)
        {
            cout<<min(r[0],l[1])<<'\n';
            continue;
        }
        ll ans=0;
        for(ll i=0;i<n-1;++i)
        {
            ans+=min(r[i],l[i+1]);
        }
        cout<<ans<<"\n";
    }
    return 0;
}