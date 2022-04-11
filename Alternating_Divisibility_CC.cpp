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
        ll cnt=0;
        ll i=n;
        while(cnt<n)
        {
            if(cnt%2==0)
            cout<<i<<' ';
            else
            {
                cout<<i*2<<' ';
                i--;
            }
            cnt++;
        }
        cout<<'\n';
    }
    return 0;
}