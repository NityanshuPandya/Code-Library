#include<bits/stdc++.h>
using namespace std;
int a[5005],b[5005],c[5005];
int main()
{
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
            b[i]=b[i-1]+a[i];
            c[i]=-1e9;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j+i-1<=n;j++)
            {
                c[i]=max(c[i],b[j+i-1]-b[j-1]);
            }
        }
        int ans=0;
        for(int i=0;i<=n;i++)
        {
            for(int j=i;j<=n;j++)
            {
                ans=max(ans,c[j]+i*x);
            }
            printf("%d ",ans);
        }
        printf("\n");
    }
    return 0;
}