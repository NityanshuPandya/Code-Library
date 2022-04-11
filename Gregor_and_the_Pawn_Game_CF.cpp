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
    ll tc,i;
    cin >> tc;
    while (tc--)
    {
        ll p,cnt=0;
        cin>>p;
        string a,b;
        cin>>a>>b;
        f(i,0,p)
        {
            if(a[i]=='0' && b[i]=='1')
            cnt++;
            else if(a[i]=='1' && b[i]=='1')
            {
                if(a[i-1]=='1')
                {
                    cnt++;
                    a[i-1]='0';
                }
                else if(a[i+1]=='1')
                {
                    cnt++;
                    a[i+1]='0';
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}