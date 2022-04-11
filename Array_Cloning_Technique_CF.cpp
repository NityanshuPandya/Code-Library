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
        map<ll,ll> m;
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            m[x]++;
        }
        if(m.size()==1)
        cout<<"0\n";
        else
        {
            ll mx=INT_MIN,cnt=0;
            for(auto x:m)
            mx=max(mx,x.second);
            while(mx<n)
            {
                cnt+=(mx*2)-mx;
                mx=(mx*2);
                cnt++;
            }
            cout<<cnt-(mx-n)<<'\n';
        }
    }
    return 0;
}