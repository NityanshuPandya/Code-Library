#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<long long int>;
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
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
        string s,s1,s3;
        cin>>s;
        if(n%2!=0)
        {cout<<"NO\n";continue;}
        map<char,ll> m;
        bool b=true;
        for(auto ch:s)
        {
            m[ch]++;
        }
        for(auto &x:m)
        {
            if(x.second>n/2)
            {
                cout<<"NO\n";
                b=false;
                break;
            }
        }
        if(b)
        {
            sort(s.begin(),s.end());
            reverse(s.begin()+(n/2),s.end());
            cout<<"YES\n"<<s<<"\n";
        }
    }
    return 0;
}