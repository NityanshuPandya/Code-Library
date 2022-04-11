#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<long long int>;
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define eb emplace_back
#define M 1000000007
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
        string s;
        cin>>s;
        ll i=s.size()-1,cnt=0,ans=INT_MAX;
        while(s[i]!='0' && i>=0)
        {
            cnt++;
            i--;
        }
        i--;
        while(s[i]!='0' && s[i]!='5' && i>=0)
        {
            cnt++;
            i--;
        }
        ans=min(ans,cnt);
        cnt=0;
        i=s.size()-1;
        while(s[i]!='5' && i>=0)
        {
            cnt++;
            i--;
        }
        i--;
        while(s[i]!='2' && s[i]!='7' && i>=0)
        {
            cnt++;
            i--;
        }
        ans=min(ans,cnt);
        cout<<ans<<'\n';
    }
    return 0;
}