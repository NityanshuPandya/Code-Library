#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,j,mx=0;
        cin>>n;
        int a[n],count=0;
        for(j=0;j<n;j++)
        cin>>a[j];
        a[n]=-1;
        for(j=0;j<n;j++)
        {
            if(a[j]>mx)
            {
                if(a[j]>a[j+1])
                count++;
            }
            mx=max(a[j],mx);
        }
        cout<<count<<endl;
    }
}