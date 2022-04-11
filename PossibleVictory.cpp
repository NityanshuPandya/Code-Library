#include<iostream>
using namespace std;
int main()
{
    int r,o,c;
    cin>>r>>o>>c;
    int m,n,p;
    m=20-o;
    n=m*6;
    p=n*6;
    if(c+p>r)
    cout<<"Yes";
    else cout<<"No";
}