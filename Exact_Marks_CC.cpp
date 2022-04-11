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
        ll n,x;
        cin>>n>>x;
        ll a=x/3,b=x%3;
        if(b==0)
            cout<<"YES\n"<<a<<" 0 "<<n-a<<'\n';
        else if(b==1 && a<=n-3)
            cout<<"YES\n"<<a+1<<" 2 "<<n-(a+3)<<'\n';
        else if(b==2 && a<=n-2)
            cout<<"YES\n"<<a+1<<" 1 "<<n-(a+2)<<'\n';
        else
            cout<<"NO\n";
    }
    return 0;
}