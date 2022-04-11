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
bool cmp(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.second==b.second)
    return a.first< b.first;
    return a.second<b.second;
}
int main()
{
    setIO("");
    ll tc;
    cin>>tc;
    while(tc--)
    {
        string str;
        getline(cin,str);
        ll n,m;
        cin>>n>>m;
        vector<pair<ll,ll>> v;
        unordered_map<ll,ll> ma;
        for(ll i=0;i<m;++i)
        {
            ll x,y;
            cin>>x>>y;
            v.eb(mp(x,y));
            ma[x]=i+1;
        }
        
        sort(v.begin(),v.end(),cmp);
        ll mn=0;
        vi x,y;
        for(ll i=0;i<2*n;++i)
        {
            mn+=v[i].second;
            y.eb(v[i].first);
        }
        sort(y.begin(),y.end());
        for(ll i=0;i<2*n;++i)
        {
            x.eb(ma[y[i]]);
        }
        cout<<mn<<'\n';
        for(ll i=0;i<n;i++)
        {
            cout<<x[i]<<" "<<x[2*n-i-1]<<'\n';
        }
    }
    return 0;
}