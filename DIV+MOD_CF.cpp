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
        ll l,r,a;
        cin>>l>>r>>a;
        ll n=r/a;
        ll x=n*a;
        if(n+(r%a)>=(n-1)+(a-1))
        cout<<n+(r%a)<<'\n';
        else
        {
            if((x-1)>=l)
            cout<<(n-1)+(a-1)<<'\n';
            else if((r%a)>(l%a))
            cout<<n+(r%a)<<'\n';
            else
            cout<<(l/a)+(l%a)<<"\n";
        }
    }
    return 0;
}