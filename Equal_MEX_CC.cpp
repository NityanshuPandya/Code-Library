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
        for(ll i=0;i<2*n;++i)
        {
            ll x;
            cin>>x;
            m[x]++;
        }
        bool b=true;
        for(ll i=0;i<=n;++i)
        {
            if(m[i]==1)
            {
                b=false;
                break;
            }
            else if(m[i]==0){
                b=true;
                break;
            }
        }
        if(b)
        {cout<<"YES\n";}
        else
        cout<<"NO\n";
    }
    return 0;
}