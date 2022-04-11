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
bool all_married(vi &wm)
{
    if(find(wm.begin(),wm.end(),-1)==wm.end())
    return false;
    return true;
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
        vector<vi> w(n),m(n);
        for(int i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            for(int j=0;j<n;++j)
            {
                ll y;
                cin>>y;
                w[x-1].eb(y-1);
            }
        }
        for(int i=0;i<n;++i)
        {
            ll x;
            cin>>x;
            for(int j=0;j<n;++j)
            {
                ll y;
                cin>>y;
                m[x-1].eb(y-1);
            }
        }
        vi mw(n,-1),wm(n,-1);
        vector<vi> mwm(n,mw);
        vi b;
        for(int i=0;i<n;++i)
        b.eb(i);
        for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
        mwm[i][w[i][j]]=j;
        while(!b.empty())
        {
            int mm=b[0];
            b.erase(b.begin());
            for(auto ww:m[mm])
            {
                if(wm[ww]==-1)
                {
                    wm[ww]=mm;
                    mw[mm]=ww;
                    break;
                }
                else
                {
                    int om=wm[ww];
                    if(mwm[ww][om]>mwm[ww][mm])
                    {
                        mw[om]=-1;
                        b.eb(om);
                        wm[ww]=mm;
                        mw[mm]=ww;
                        break;
                    }
                }
            }
        }
        for(int i=0;i<n;++i)
        {
            cout<<i+1<<" "<<mw[i]+1<<'\n';
        }
    }
    return 0;
}