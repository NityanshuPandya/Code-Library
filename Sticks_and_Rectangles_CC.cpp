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
        map<ll,ll> m;
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            m[x]++;
            m[x]=m[x]%4;
        }
        ll c1=0,c2=0,c3=0,ans=0;
        for(auto x:m)
        {
            if(x.second==2)
            c2++;
            else if(x.second==1)
            c1++;
            else if(x.second==3)
            c3++;
        }
        ans+=c3;
        ans+=(c1/2)*2;
        if(c2%2!=0 && c1%2!=0)
        {
            ans++;
        }
        else if(c2%2!=0 && c1%2==0)
        {
            ans+=2;
        }
        else if(c1%2!=0)
        {
            ans+=3;
        }
        cout<<ans<<'\n';
    }
    return 0;
}