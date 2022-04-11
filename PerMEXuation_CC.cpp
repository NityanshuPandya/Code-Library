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
        string s;
        cin>>n>>s;
        if(s[n]=='0' || s[0]=='0' || s[1]=='0')
        {
            cout<<"NO\n";
            continue;
        }
        vi v;
        ll a;
        bool b=false;
        for(ll i=0;i<n+1;++i)
        {
            if(s[i]=='0')
            {
                if(s[i-1]=='0')
                {
                    v.eb(i);
                }  
                if(s[i-1]=='1')
                {
                    a=v[v.size()-1];
                    v.pop_back();
                    v.eb(i);
                }
                b=true;  
            }
            if(s[i]=='1')
            {
                if(b)
                v.eb(a);
                v.eb(i);
                b=false;
            }
        }
        v.pop_back();
        cout<<"YES\n";
        for(auto x:v)
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}