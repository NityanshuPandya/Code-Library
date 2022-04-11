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
void all_sub_sum(vi v,vi &a,ll i,ll n,ll sum,ll k)
{
    if(i==n)
    {
        if(sum==k)
        {
            for(auto x:v)
            cout<<x<<' ';
            cout<<'\n';
        }
        return;
    }
    v.eb(a[i]);
    sum+=a[i];
    all_sub_sum(v,a,i+1,n,sum,k);
    v.pop_back();
    sum-=a[i];
    all_sub_sum(v,a,i+1,n,sum,k);
}
bool any_sub_sum(vi v,vi &a,ll i,ll n,ll sum,ll k)
{
    if(i==n)
    {
        if(sum==k)
        {
            for(auto x:v)
            cout<<x<<' ';
            cout<<'\n';
            return true;
        }
        return false;
    }
    v.eb(a[i]);
    sum+=a[i];
    if(any_sub_sum(v,a,i+1,n,sum,k))
    return true;
    v.pop_back();
    sum-=a[i];
    if(any_sub_sum(v,a,i+1,n,sum,k))
    return true;
    return false;
}
int cnt_sub_sum(vi &a,ll i,ll n,ll sum,ll k)
{
    if(i==n)
    {
        if(sum==k)
        {
            return 1;
        }
        return 0;
    }
    
    sum+=a[i];
    ll r=cnt_sub_sum(a,i+1,n,sum,k);
    sum-=a[i];
    ll l=cnt_sub_sum(a,i+1,n,sum,k);
    return r+l;
}
int main()
{
    setIO("rough");
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n,k;
        cin>>n>>k;
        vi a,v;
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            a.eb(x);
        }
        all_sub_sum(v,a,0,n,0,k);
        any_sub_sum(v,a,0,n,0,k);
        cout<<cnt_sub_sum(a,0,n,0,k)<<'\n';
    }
    return 0;
}