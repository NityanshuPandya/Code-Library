#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define vi vector<int>
#define f(i, a, b) for (i = a; i < b; i++)
ll v[100001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, i, j;
    cin >> t;
    f(i,1,100000)
    v[i]=i*i;
    while (t--)
    {
        ll n,a,b;
        cin>>n;
        f(i,1,100000)
        {
            if(n>v[i])
            continue;
            else if(n==v[i])
            {
                cout<<sqrt(v[i])<<" 1\n";
                break;
            }
            else{
                a=v[i]-n;
                b=n-v[i-1];
                if(a<b)
                {
                    cout<<sqrt(v[i])<<" "<<a+1<<endl;
                    break;
                }
                else{
                    cout<<b<<" "<<sqrt(v[i])<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}