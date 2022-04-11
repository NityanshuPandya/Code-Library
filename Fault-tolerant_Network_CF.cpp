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
    cin>>tc;
    while(tc--)
    {
        ll n;
        cin>>n;
        vi a,b;
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            a.eb(x);
        }
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            b.eb(x);
        }
        ll c1=abs(a[0]-b[0]);
        ll c3=abs(a[n-1]-b[n-1]);
        ll c2=abs(a[0]-b[n-1]);
        ll c4=abs(a[n-1]-b[0]);
        ll y=min(c1+c3,c2+c4);
        ll z=0,d1=INT_MAX,d2=INT_MAX,d3=INT_MAX,d4=INT_MAX;
        for(ll i=0;i<n;++i)
        {
            d1=min(d1,abs(a[0]-b[i]));
            d2=min(d2,abs(a[n-1]-b[i]));
            d3=min(d3,abs(b[0]-a[i]));
            d4=min(d4,abs(b[n-1]-a[i]));
        }
        z=d1+d2+d3+d4;
        y=min(y,z);
        y=min(y,c1+d2+d4);
        y=min(y,c3+d1+d3);
        y=min(y,c2+d3+d2);
        y=min(y,c4+d1+d4);
        cout<<y<<'\n';
    }
    return 0;
}