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
        vi a;
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            a.eb(x);
        }
        bool b=false;
        for(ll i=0;i<n;++i)
        {
            for(ll j=0;j<n;++j)
            {
                if(i!=j)
                {
                    for(ll k=0;k<n;++k)
                    {
                        if(k!=i && k!=j)
                        for(ll l=0;l<n;++l)
                        {
                            if(k!=l && l!=i && l!=j)
                            {
                                int s=__builtin_popcount(a[i]^a[j]);
                                int d=__builtin_popcount(a[k]^a[l]);
                                if(s==d)
                                {
                                    b=true;
                                    cout<<i+1<<' '<<j+1<<' '<<k+1<<' '<<l+1<<'\n';
                                    break;
                                }
                            }
                        }
                        if(b)
                        break;
                    }
                }
                if(b)
                break;
            }
            if(b)
            break;
        }
        if(!b)
        cout<<"-1\n";
    }
    return 0;
}