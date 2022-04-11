#include<iostream>
using namespace std;
int main()
{
    int t,i=0,k=0;
    cin>>t;
    for(k=0;k<t;k++)
    {
         int m,n;
         cin>>n>>m;
         int a[n],k=0,j=0,b[m];
         for(j=1;j<=n;j++)
             cin>>a[j];
         for(i=1;i<=m;i++)
         b[i]=0;
         for(i=1;i<=n;i++)
         b[a[i]]++;
        for(i=1;i<=m;i++)
        {
            if(b[i]==0)
            {cout<<"Yes"<<endl;
            break;}
        }
         if(i==m+1)
         cout<<"No"<<endl;
        
    }
    return 0;
}