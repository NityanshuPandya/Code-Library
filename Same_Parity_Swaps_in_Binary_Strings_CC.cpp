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
        cin>>n;
        string s;
        cin>>s;
        vector<char> s0(n),s1(n);
        ll k=0,l=0;
        for(ll i=0;i<n;++i)
        {
            if(i%2==0)
            {
                s0[k]=s[i];
                k++;
            }
            else
            {
                s1[l]=s[i];
                l++;
            }
        }
        sort(s0.begin(),s0.begin()+k);
        sort(s1.begin(),s1.begin()+l);
        reverse(s1.begin(),s1.begin()+l);
        l=0;
        k=0;
        for(ll i=0;i<n;++i)
        {
            if(i%2==0)
            {
                s[i]=s0[k];
                k++;
            }
            else
            {
                s[i]=s1[l];
                l++;
            }
        }
        ll cnt0=0,cnt1=0,mx=INT_MIN;
        for(ll i=0;i<n-1;i+=2)
        {
            if(s[i]=='0' && s[i+1]=='1')
            cnt0++;
        }
        for(ll i=1;i<n-1;i+=2)
        {
            if(s[i]=='0' && s[i+1]=='1')
            cnt1++;
        }
        mx=max(mx,cnt0+cnt1);
        cnt0=0;
        cnt1=0;
        reverse(s0.begin(),s0.begin()+k);
        reverse(s1.begin(),s1.begin()+l);
        l=0;
        k=0;
        for(ll i=0;i<n;++i)
        {
            if(i%2==0)
            {
                s[i]=s0[k];
                k++;
            }
            else
            {
                s[i]=s1[l];
                l++;
            }
        }
        for(ll i=0;i<n-1;i+=2)
        {
            if(s[i]=='0' && s[i+1]=='1')
            cnt0++;
        }
        for(ll i=1;i<n-1;i+=2)
        {
            if(s[i]=='0' && s[i+1]=='1')
            cnt1++;
        }
        mx=max(mx,cnt0+cnt1);
        cout<<mx<<'\n';
    }
    return 0;
}