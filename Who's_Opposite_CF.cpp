#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<int>
#define f(i, a, b) for (i = a; i < b; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, i, j;
    cin >> t;
    while (t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll d=max(a,b)-min(a,b);
        d=d*2;
        if(c>d || a>d || b>d)
        {
            cout<<"-1\n";
            continue;
        }
        if(c>d/2)
        cout<<c-(d/2)<<endl;
        else
        cout<<(d/2)+c<<endl;
    }
    return 0;
}