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
        ll x=1;
        vi v;
        while(x<=1e9)
        {
            v.eb(x);
            x=x*3;
        }
        if(n>v.size())
        cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(ll i=0;i<n;++i)
            cout<<v[i]<<' ';
            cout<<"\n";
        }
    }
    return 0;
}