#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int n;
    cin>>n;
    n=n*(n+1)/2;
    cout<<n%2;
    return 0;
}