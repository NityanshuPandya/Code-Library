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
		ll n;
		string s,p;
		vector<char> v={};
		cin>>n>>s>>p;
		if(s==p)
		{
			cout<<"0\n";
			continue;
		}
		v.eb('a');
		v.eb('e');
		v.eb('i');
		v.eb('o');
		v.eb('u');
		v.eb('?');
		ll cnt=0,ans=n*2;
		for(char c='a';c<='z';c++){
			cnt=0;
		rep(i,0,n)
		{
			char c1=s[i];
			char c2=p[i];
			if(c1=='?'){c1=c;}
			if(c2=='?'){c2=c;}
			if(c1==c2){continue;}
			if((find(v.begin(),v.end(),c1)!=v.end()) && (find(v.begin(),v.end(),c2)!=v.end()) || ((find(v.begin(),v.end(),c1)==v.end()) && (find(v.begin(),v.end(),c2)==v.end())))
			{cnt+=2;}
			else
			{cnt++;}
		}
		ans=min(ans,cnt);
		}
		cout<<ans<<'\n';
	}
	return 0;
}