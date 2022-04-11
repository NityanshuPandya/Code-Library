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
    string s;
    unordered_map<string,int> m;
    for(int i=0;i<tc;++i)
    {
        cin>>s;
        auto it = m.find(s);
        if(it==m.end())
        {
            cout<<"OK\n";
            m[s]++;
        }
        else{
            string s1=s+to_string(m[s]++);
            cout<<s1<<'\n';
        }
    }
    return 0;
}