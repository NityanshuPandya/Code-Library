#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int n;
        cin>>n;
        int a[n],pd=0,curr=0,ans=0,count=2;
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=1;i<n;i++)
        {
            curr=a[i]-a[i-1];
            if(pd==curr)
            ++count;
            else
            {  
                ans=max(count,ans);
                count=2;
                pd=curr;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}