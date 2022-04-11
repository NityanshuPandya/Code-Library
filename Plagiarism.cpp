#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int l[k];
        for(int i=0;i<k;i++)
        cin>>l[i];
        int Count=0,i=0;
        int c[n+1]={};
        vector<int> v;
        vector<int> ::iterator it;
        while(i<k)
        {
            if(l[i]<=n)
            c[l[i]]++;
            i++;
        }
        for(int i=1;i<=n;i++)
        {
           if(c[i]>1)
            {
                Count++;
                v.push_back(i);
            }
        }
        cout<<Count<<" ";
        for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
        cout<<"\n";
        t--;
    }
    return 0;
}