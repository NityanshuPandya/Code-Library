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
        ll sum=0;
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            a.eb(x);
            sum+=x;
        }
        if(n==1 && a[0]!=1)
        {
            cout<<"NO\n";
            continue;
        }
        else if(n==1 && a[0]==1)
        {
            cout<<"YES\n";
            continue;
        }
        sort(a.begin(),a.end());
        if(a[n-1]-a[n-2]>1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}