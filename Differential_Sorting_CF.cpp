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
        vi v;
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            v.eb(x);
        }
        if(v[n-2]>v[n-1])
        {
            cout<<"-1\n";
            continue;
        }
        ll mx=v[n-1],m=n-1,cnt=0;
        vector<pair<ll,ll>> w;
        for(ll i=n-1;i>=1;--i)
        {

            if(v[i]<v[i-1])
            {
                if(v[i]-mx>v[i])
                {
                    cnt=-1;
                    break;
                }
                cnt++;
                if(abs(v[i]-mx)<=1e9)
                v[i-1]=v[i]-mx;
                else
                v[i-1]=-(ll)1e9;
                w.eb(mp(i+1,m+1));
            }
            if(mx<v[i])
            {
                mx=v[i];
                m=i;
            }
        }
        if(cnt==-1)
        {
            cout<<"-1\n";
            continue;
        }
        if(cnt==0)
        {
            cout<<"0\n";
            continue;
        }
        cout<<cnt<<"\n";
        for(auto x:w)
        {
            cout<<(x.first)-1<<' '<<x.first<<' '<<x.second<<"\n";
        }
    }
    return 0;
}