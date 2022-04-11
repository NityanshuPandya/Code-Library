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
        ll cnt=0,i=1;
        if(n==2)
        {
            cout<<"0\n";
            continue;
        }
        else if(n==3 || n==4)
        {
            cout<<"1\n";
            continue;
        }
        while(n>=(1<<i))
        {
            cnt+=(1<<i)-(1<<(i-1))-1;
            i++;
        }
        if(n==(1<<i))
        {
            cout<<cnt<<'\n';
            continue;
        }
        i--;
        cnt+=n-(1<<i);
        cout<<cnt<<'\n';
    }
    return 0;
}