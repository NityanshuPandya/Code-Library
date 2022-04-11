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
		ll n;
		cin>>n;
		unordered_map<ll,vector<ll>> m;
		for(ll i=1;i<=n;++i)
		{
			ll y;
			cin>>y;
			m[y].eb(i);
		}
		ll Min=INT_MAX;
		for(auto &x:m)
		{
			if(x.second.size()>1){
				ll j=*(x.second.begin());
			for(auto it=x.second.begin()+1;it!=x.second.end();++it)
			{
				Min=min(Min,(*it)-j);
				j=(*it);
			}
			}
		}
		if(Min==INT_MAX)
		cout<<"-1\n";
		else
		cout<<n-Min<<'\n';
	}
	return 0;
}