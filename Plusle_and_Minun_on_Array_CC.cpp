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
        ll mn=INT_MAX,mx=-1,sum=0;
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            x=abs(x);
            if(i%2==0)
            {
                sum+=x;
                mn=min(mn,x);
            }
            else
            {
                sum-=x;
                mx=max(mx,x);
            }
        }
        if(mx>mn)
        {
            sum+=2*mx;
            sum-=2*mn;
        }
        cout<<sum<<'\n';
    }
    return 0;
}