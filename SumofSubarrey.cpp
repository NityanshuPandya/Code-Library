#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],sum=0,curr=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {   curr=0;
        for(int j=i;j<n;j++)
        {
            curr+=a[j];
            sum+=curr;
            cout<<curr<<" ";
        }
        cout<<endl;
    }
    cout<<sum<<endl;
    return 0;
}