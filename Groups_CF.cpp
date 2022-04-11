#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<long long int>
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define eb emplace_back
#define M 1000000007
void setIO(string s)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    /*if (s.size())
    {
        freopen((s + ".in").c_str(), "r", stdin);
        freopen((s + ".out").c_str(), "w", stdout);
    }*/
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
        bool b=false;
        ll a[1005][7];
        rep(i,0,n)
        {
            rep(j,0,5)
            cin>>a[i][j];
        }
        rep(i,0,5)
        {
            rep(j,i+1,5)
            {
                ll x=0,y=0,z=0;
                rep(k,0,n)
                {
                    if(a[k][i] && a[k][j]) z++;
                    else if(a[k][i]) x++;
                    else if(a[k][j]) y++;
                }
                if(x+y+z==n && x<=(n>>1) && y<=(n>>1))
                {b=true;break;}
            }
        }
        if(b)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}