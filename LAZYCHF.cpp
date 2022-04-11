#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
    cin>>t;
    while(t)
    {
        int x,m,d;
        cin>>x>>m>>d;
        int Min=INT_MAX;
        Min=min(x*m,x+d);
        cout<<Min<<"\n";
        t--;
    }
	return 0;
}
