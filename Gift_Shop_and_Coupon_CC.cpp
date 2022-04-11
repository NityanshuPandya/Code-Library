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
        ll n,k;
        cin>>n>>k;
        vi a;
        for(ll i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            a.eb(x);
        }
        sort(a.begin(),a.end());
        ll cnt=0,sum=0,i=0;
        while(sum<k && i<n)
        {
            sum+=a[i];
            i++;
            cnt++;
        }
        if(sum==k || (i==n && sum<=k))
        cout<<cnt<<'\n';
        else{
            i--;
            sum-=a[i];
            cnt--;
            if((k-sum)>=(a[i]/2)+1 && a[i]%2==1)
            cnt++;
            else if((k-sum)>=(a[i]/2) && a[i]%2==0)
            cnt++;
            cout<<cnt<<'\n';
        }

    }
    return 0;
}