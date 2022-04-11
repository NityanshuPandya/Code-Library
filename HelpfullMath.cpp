#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    sort(a.begin(),a.end());
    for(auto ch=0;ch<a.length();ch++)
    {
        if(a.at(ch)!='+'&& ch<a.length()-1)
        {
            cout<<a.at(ch)<<"+";
        }
        else if(a.at(ch)!='+'&& ch==a.length()-1)
        cout<<a.at(ch);
    }
    return 0;
}

