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
        ll n,k;
        cin>>n>>k;
        vi v;
        if(n==k){
            for(ll i=1;i<=n;++i)
            {
                v.eb(i);
            }
        }
        else if(k==n-1)
        {
            for(ll i=1;i<=n;++i)
            {
                v.eb(i);
            }
            if(n%2==0)
            {
                swap(v[n-1],v[(n-1)/2]);
            }
            else
            {
                swap(v[n-2],v[(n-2)/2]);
            }
        }
        else{
            for(ll i=1;i<=k;++i)
            {
                v.eb(i);
            }
            for(ll i=k+1;i<=n;++i)
            {
                if(i==n)
                v.eb(k+1);
                else
                v.eb(i+1);
            }
        }
        for(auto x:v)
        {
            cout<<x<<' ';
        }
        cout<<"\n";
    }
    return 0;
}