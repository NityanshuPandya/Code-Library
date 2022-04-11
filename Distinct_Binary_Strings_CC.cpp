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
        ll cnt=0;
        bool b0=true,b1=true;
        for(auto ch:s)
        {
            if(ch=='0')
            {
                if(b0)
                {cnt++;b0=false;}
                b1=true;
            }
            if(ch=='1')
            {
                if(b1)
                {
                    cnt++;
                    b1=false;
                }
                b0=true;
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}