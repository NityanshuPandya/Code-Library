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
        ll n,q;
        cin>>n>>q;
        string a,b;
        cin>>a>>b;
        vi v(n+1),w(n+1);
        v[0]=0;
        w[0]=0;
        for(ll i=1;i<=n;++i)
        {
            v[i]=(26+(b[i-1]-'a')-(a[i-1]-'a'))%26;
        }
        for(ll j=1;j<=n;++j)
        {
            if(j%2==0)
            w[j]=(v[j]+w[j-1])%26;
            else
            w[j]=(-v[j]+w[j-1])%26;
        }
        for(ll i=0;i<q;++i)
        {
            ll l,r,sum=0;
            cin>>l>>r;
            if((w[r]-w[l-1])%26)
            cout<<"NO\n";
            else
            cout<<"YES\n";
        }
    }
    return 0;
}