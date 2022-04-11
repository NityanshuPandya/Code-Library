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
    ll n;
    cin>>n;
    vi a(n+1),dp(n+1,0);
    a[0]=0;
    for(ll i=1;i<=n;++i)
    {
        ll x;
        cin>>x;
        a[i]=x;
    }
    ll i=1;
    vector<vi> ans;
    while(i<=n)
    {
        if(dp[i]==0)
        {
            ll j=i;
            vi x;
            while(dp[j]!=1)
            {
                dp[j]=1;
                x.eb(j);
                j=a[j];
            }
            x.eb(j);
            ans.eb(x);
        }
        i++;
    }
    cout<<ans.size()<<"\n";
    for(auto g:ans)
    {
        for(auto h:g)
        cout<<h<<' ';
        cout<<'\n';
    }
    return 0;
}