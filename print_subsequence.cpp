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
void subsequence(vi v,vi &a,ll i,ll n)
{
    if(i==n)
    {
        for(auto x:v)
        cout<<x<<' ';
        cout<<'\n';
        return;
    }
    v.eb(a[i]);
    subsequence(v,a,i+1,n);
    v.pop_back();
    subsequence(v,a,i+1,n);
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
        vi a,v;
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            a.eb(x);
        }
        subsequence(v,a,0,n);
    }
    return 0;
}