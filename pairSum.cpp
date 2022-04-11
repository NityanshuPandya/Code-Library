#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    int low=0,high=n-1;
    while(low<high)
    {
        if(arr[low]+arr[high]==k)
        {
            cout<<low<<" "<<high;
            return 0;
        }
        else if (arr[low]+arr[high]>k)
        high--;
        else 
        low++;
    }
    cout<<"Not Found";
    return 0;
}