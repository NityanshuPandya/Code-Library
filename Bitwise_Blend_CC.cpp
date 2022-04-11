#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<long long int>;
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define eb emplace_back
#define mp make_pair
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
        vector<ll> v;
        vector<pair<ll,ll>> ans;
        ll oi=0;
        bool b=true;
        for(int i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            v.eb(x);
            if(x%2!=0)
            {oi=i+1;b=false;}
        }
        ll e=0,o=0;
        for(int i=0;i<n;++i)
        {
            if(i%2==0 && v[i]%2==0)
            e++;
            else if(i%2!=0 && v[i]%2!=0)
            e++;
            else if(i%2!=0 && v[i]%2==0)
            o++;
            else if(i%2==0 && v[i]%2!=0)
            o++;
        }
        if(b)
        {
            cout<<"-1\n";
            continue;
        }
        if(e>=o)
        {
            for(ll i=0;i<n;++i)
            {
                if(i%2==0)
                {
                    if(v[i]%2!=0)
                    ans.eb(mp(i+1,oi));
                }
                else{
                    if(v[i]%2!=0)
                    oi=i+1;
                    else
                    ans.eb(mp(i+1,oi));
                }
            }
        }
        else{
            for(ll i=0;i<n;++i)
            {
                if(i%2==0)
                {
                    if(v[i]%2!=0)
                    oi=i+1;
                    else
                    ans.eb(mp(i+1,oi));
                }
                else{
                    if(v[i]%2!=0)
                    ans.eb(mp(i+1,oi));
                }
            }
        }
        cout<<ans.size()<<'\n';
        for(auto it:ans)
        {
            cout<<it.first<<' '<<it.second<<'\n';
        }
    }
    return 0;
}