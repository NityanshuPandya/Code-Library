#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<long long>
#define f(i, a, b) for (i = a; i < b; i++)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,h,cnt=0,i;
        vi v;
        string s;
        cin>>l>>h>>s;
        bool b=false;
        f(i,0,l)
        {
            if(s[i]=='0')
            {    cnt++;b=true;}
            else{
                if(b)
                v.push_back(cnt);
                cnt=0;
                b=false;
            }
            if(i==l-1)
            v.push_back(cnt);
        }
        ll n=v.size();
        f(i,0,n)
        {
            if(v[i]>=h)
            {
                cout<<"YES\n";
                break;
            }
            else if(v[i]>h/2)
            {
                h=2*(h-v[i]);
            }
        }
        if(i==n)
        cout<<"NO\n";
    }
    return 0;
}