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
        vi b;
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            b.eb(x);
        }
        bool b0=false;
        vi a(n+1,-1);
        ll cnt=0,mx=INT_MIN,mex=0;
        for(ll i=0;i<n;++i)
        {
            if(b[i]>(i+1))
            {
                b0=true;
                break;
            }
            if(mx>b[i] && b[i]!=-1)
            {
                b0=true;
                break;
            }
            mx=max(mx,b[i]);
        }
        if(b0)
        {
            cout<<"-1\n";
            continue;
        }
        for(ll i=n;i>=0;--i)
        {
            a[i]=i;
        }
        ll m=max_element(b.begin(),b.end())-b.begin();
        for(ll i=0;i<n;++i)
        {
            if(a[i]==b[m])
            a[i]=b[m]+1;
        }
        for(ll i=n-1;i>=0;--i)
        {
            if(b[i]!=-1)
            swap(a[b[i]],a[i+1]);
        }
        a.pop_back();
        for(auto x:a)
        cout<<x<<' ';
        cout<<'\n';
    }
    return 0;
}