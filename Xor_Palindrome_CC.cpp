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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(n%2!=0)
        {
            cout<<"YES\n";
            continue;
        }
        ll cnt0=0,cnt1=0;
        for(auto ch:s)
        {
            if(ch=='0')
            cnt0++;
            else
            cnt1++;
        }
        if(cnt0==cnt1)
        {
            cout<<"YES\n";
            continue;
        }
        if(cnt0%2==0 && cnt1%2==0)
        {
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
    }
    return 0;
}