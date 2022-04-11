#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int N=1e5;
    int ind[N];
    for(int i=0;i<N;i++)
    ind[i]=-1;
    int minInd=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(ind[a[i]]!=-1)
        minInd=min(minInd,ind[a[i]]);
        else
        ind[a[i]]=i;
    }
    if(minInd==INT_MAX)
    cout<<"-1"<<endl;
    else
    cout<<minInd+1<<endl;
    return 0;
}
