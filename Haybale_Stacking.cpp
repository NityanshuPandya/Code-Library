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
ll p[1000000];
int main()
{
	setIO("");
	ll n,k;
	cin>>n>>k;
	ll a[n+5],b[n+5],m[n+5]={};
	rep(i,0,k)
	{
		cin>>a[i]>>b[i];
		m[a[i]]++;
		m[b[i]+1]--;
	}
	rep(i,1,n+1)
	{
		p[i]=p[i-1]+m[i];
	}
	sort(p+1,p+n+1);
	ll x=(n+1)/2;
	cout<<p[x];
	return 0;
}