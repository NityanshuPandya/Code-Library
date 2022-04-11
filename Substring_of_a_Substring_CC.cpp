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
        string s;
        cin>>s;
        ll mx=INT_MIN,cnt=0;
        for(auto ch:s)
        {
            if(ch==s[0] || ch==s[s.size()-1])
            {
                mx=max(mx,cnt);
                cnt=0;
            }
            else
            cnt++;
        }
        if(mx>0)
        cout<<mx<<'\n';
        else
        cout<<"-1\n";
    }
    return 0;
}