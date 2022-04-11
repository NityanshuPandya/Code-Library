#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int currsum=0,maxsum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        currsum=max(arr[i],currsum+arr[i]);
        maxsum=max(maxsum,currsum);
    }
    cout<<maxsum;
    return 0;
}