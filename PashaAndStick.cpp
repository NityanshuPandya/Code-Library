#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin>>n;
    int a=n/4;
    int b=n%4;
    if(n%2==0)
    {
        if(b==0)
        cout<<a-1;
        else
        cout<<a;
    }
    else cout<<"0";
    return 0;
}