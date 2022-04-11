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
	cin >> tc;
	while (tc--)
	{
		ll n, q;
		cin >> n >> q;
		ll p[n+5],a[n+5],b[n+5];
		p[0]=0;
		b[n+1]=0;
		rep(i, 1, n+1 )
		{
			cin >>a[i];
			p[i]=__gcd(p[i-1],a[i]);
		}
		rep(i,n+1,1)
		b[i]=__gcd(b[i+1],a[i]);
		while(q--)
		{
			ll l,r;
			cin>>l>>r;
			ll g1=p[l-1];
			ll g2=b[r+1];
			cout<<__gcd(g1,g2)<<'\n';
		}
		
	}

	return 0;
}