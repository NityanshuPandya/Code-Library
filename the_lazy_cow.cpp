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
ll p[405][405],a;
int main()
{
	setIO("");
	ll n,k;
	cin>>n>>k;
	rep(i,1,n+1)
	{
		rep(j,1,n+1)
		{
			cin>>a;
			p[i][j]=p[i][j-1]+a;
		}
	}
	ll ans=0;
	rep(i,1,n+1)
	{
		rep(j,1,n+1)
		{
			ll l=i,sum=0,y=min(j+k,n),z=max(j-k-1,0ll);
			while(l<=i+k && l<=n)
			{
				sum+=p[l][y]-p[l][z];
				if(z==j-k-1+l-i)
				z++;
				if(y==j+k-l+i)
				y--;
				l++;
			}
			l=i-1;
			y=min(j+k-1,n);
			z=max(j-k,0ll);
			while(l>=i-k && l>=1)
			{
				sum+=p[l][y]-p[l][z];
				if(y==j+k-i+l)
				y--;
				if(z==j-k+i-l-1)
				z++;
				l--;
			}
			ans=max(ans,sum);
		}
	}
	cout<<ans;
	return 0;
}