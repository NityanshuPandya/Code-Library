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
ll p[1005][1005],a[1005][1005];
int main()
{
	setIO("");
	ll n,k;
	cin>>n>>k;
	rep(i,0,n)
	{
		ll x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		a[y1][x1]++;
		a[y2][x1]--;
		a[y1][x2]--;
		a[y2][x2]++;
	}
	rep(i,0,1001)
	{
		rep(j,0,1001)
		{
			if(i>0 && j>0)
			p[i][j]=p[i-1][j]+p[i][j-1]-p[i-1][j-1]+a[i][j];
			else if(i>0)
			p[i][j]=p[i-1][j]+a[i][j];
			else if(j>0)
			p[i][j]=p[i][j-1]+a[i][j];
			else
			p[i][j]=a[i][j];
		}
	}
	ll cnt=0;
	rep(i,0,1001)
	{
		rep(j,0,1001)
		{
			if(p[i][j]==k)
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}