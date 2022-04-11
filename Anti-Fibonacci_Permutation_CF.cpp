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
        if(n==3)
        {
            cout<<"3 2 1\n1 3 2\n3 1 2\n";
            continue;
        }
        for(ll i=0;i<n;++i)
        {
            for(ll j=n-i;j>=1;--j)
            {
                cout<<j<<' ';
            }
            for(ll k=n;k>(n-i);--k)
            {
                cout<<k<<' ';
            }
            cout<<'\n';
        }
    }
    return 0;
}