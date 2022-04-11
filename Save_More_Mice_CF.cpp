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
        ll n,k;
        cin>>n>>k;
        ll a[k+5];
        rep(i,0,k)
        cin>>a[i];
        sort(a,a+k);
        ll x=0,y=k-1,cnt=0;
        while(x<a[y] && y>=0)
        {
                cnt++;
                x+=n-a[y];
                y--;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}