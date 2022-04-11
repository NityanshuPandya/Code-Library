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
        int n;
        cin>>n;
        string s[n];
        int i=0;
        for(int i=0;i<n;i++)
        cin>>s[i];
        for(i=0;i<n;i++)
        {
             if(s[i].front()>='a' && s[i].front()<='m')
             {
                 for(auto it=s[i].begin()+1;it!=s[i].end();it++)
                 {
                     if(*it>='a'&&*it<='m'){}
                     else
                     {
                         cout<<"NO"<<"\n";
                         i=n+5;
                         break;
                     }
                 }
             }
             else if(s[i].front()>='N'&&s[i].front()<='Z')
             {
                  for(auto it=s[i].begin()+1;it!=s[i].end();it++)
                 {
                     if(*it>='N'&&*it<='Z'){}
                     else
                     {
                         cout<<"NO"<<"\n";
                         i=n+5;
                         break;
                     }
                 }
             }
             else 
             {
                 cout<<"NO"<<"\n";
                 i=n+5;
                 break;
             }
        }
        if(i==n)
        cout<<"YES"<<"\n";
        t--;
    }
    return 0;
}