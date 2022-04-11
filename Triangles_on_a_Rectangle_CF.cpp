#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<long long int>;
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define eb emplace_back
const int M = 1000000007;
void setIO(string s)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	if (s.size())
	{
		freopen((s + ".in").c_str(), "r", stdin);
		freopen((s + ".out").c_str(), "w", stdout);
	}
}
int main()
{
	setIO("");
	ll tc;
	cin>>tc;
	while(tc--)
	{
		ll w,h;
		cin>>w>>h;
		ll k1,k2,k3,k4;
		cin>>k1;
		ll x1[k1+1]={};
		rep(i,0,k1)
		cin>>x1[i];
		cin>>k2;
		ll x2[k2+1]={};
		rep(i,0,k2)
		cin>>x2[i];
		cin>>k3;
		ll y1[k3+1]={};
		rep(i,0,k3)
		cin>>y1[i];
		cin>>k4;
		ll y2[k4+1]={};
		rep(i,0,k4)
		cin>>y2[i];
		ll a,b,c,d;
		a=x1[k1-1]-x1[0];
		b=x2[k2-1]-x2[0];
		c=y1[k3-1]-y1[0];
		d=y2[k4-1]-y2[0];
		a=max(a,b);
		c=max(c,d);
		ll mx=max(a*h,c*w);
		cout<<mx<<"\n";
	}
	return 0;
}