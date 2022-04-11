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
        ll x,m;
        cin>>x>>m;
        ll i=0;
        while(x>(1<<(i)) && m!=0)
        {
            i++;
        }
        if((m-i)>0)
        cout<<(ll)m-i<<'\n';
        else
        cout<<"0\n";
    }
    return 0;
}