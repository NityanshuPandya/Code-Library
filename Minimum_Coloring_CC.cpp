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
        ll n,m;
        cin>>n>>m;
        ll x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        vector<vector<ll>> v;
        for(int i=1;i<=n;++i)
        {
            vi a;
            if(abs(x1-y1)%2==i%2)
            {
                for(ll j=1;j<=m;j++)
                {
                    if(j%2==1)
                    a.eb(2);
                    else
                    a.eb(1);
                }
            }
            else
            {
                for(ll j=1;j<=m;j++)
                {
                    if(j%2==1)
                    a.eb(1);
                    else
                    a.eb(2);
                }
            }
            v.eb(a);
        }
        if(v[x2-1][y2-1]!=2)
        {
            v[x2-1][y2-1]=2;
            if(x2>=2)
            v[x2-2][y2-1]=3;
            if(y2>=2)
            v[x2-1][y2-2]=3;
            if(x2<=n-1)
            v[x2][y2-1]=3;
            if(y2<=m-1)
            v[x2-1][y2]=3;
        }
        for(ll i=0;i<n;++i)
        {
            for(ll j=0;j<m;++j)
            cout<<v[i][j]<<' ';
            cout<<'\n';
        }
    }
    return 0;
}