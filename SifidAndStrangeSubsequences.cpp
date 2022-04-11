#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++)
        cin>>arr[j];
        sort(arr,arr+n);
        for(int j=0;j<n;j++)
        cout<<arr[j]<<" ";
        int c=0;
        for(int j=n-1;j>=0;j--)
        {

        }
        cout<<c<<endl;
    }
    return 0;
}