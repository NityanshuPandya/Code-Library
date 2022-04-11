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
        ll n,x;
        cin>>n>>x;
        bool b=false;
        for(ll i=1;i<=n && (x/i)>0;++i)
        {
            if(x%i==0 && x/i<=(n-i+1))
            {
                b=true;
                break;
            }
        }
        if(b)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}