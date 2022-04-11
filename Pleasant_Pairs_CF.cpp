#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n],b[2*n+1];
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
            b[a[i]]=i;
        }
        sort(a+1,a+n+1);
        ll count=0,i=1,j=n;
       for(int i=1;i<n;i++)
       {
           for(int j=i+1;j<=n;j++)
           {
               if(a[i]*a[j]>2*n)
               break;
               if(a[i]*a[j]==b[a[i]]+b[a[j]])
               count++;
           }
       }
        cout<<count<<endl;
    }
    return 0;
}