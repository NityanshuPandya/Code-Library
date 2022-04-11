#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b;
    for(int i=0;i<a.length();i++)
        {
            if(a[i]=='.')
                b+="[.]";
                else b+=a[i];
        }
    cout<<b;
}