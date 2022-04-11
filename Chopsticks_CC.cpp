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
    ll n,d;
    cin>>n>>d;
    vi a;
    for(ll i=0;i<n;++i)
    {
        ll x;
        cin>>x;
        a.eb(x);
    }
    ll cnt=0;
    sort(a.begin(),a.end());
    for(ll i=1;i<n;)
    {
        if(a[i]-a[i-1]<=d)
        {
            cnt++;
            i+=2;
        }
        else
        i++;
    }
    cout<<cnt;
    return 0;
}