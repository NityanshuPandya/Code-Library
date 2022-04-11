#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vi = vector<long long int>;
#define mp make_pair
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
class Solution
{
public:
    long long opeli(long long x, long long a0)
    {
        long long b = min(a0, x - a0), n = 0;
        n += (a0 * (x - a0));
        for (long long i = 2; i <= b; ++i)
        {
            n += ((a0 * (a0 - 1) / i) * ((x - a0) * (x - a0 - 1) / i));
        }
        return n;
    }
    long long dpeli(long long x, long long a0, long long a1)
    {
        long long b = min(a0, x - a1), n = 0, c = (a1 - a0) * (a1 - a0 - 1) / 2;
        n += ((a0 * (x - a1)) * (c + 1));
        for (long long i = 2; i <= b; ++i)
        {
            n += (((a0 * (a0 - 1) / i) * ((x - a1) * (x - a1 - 1) / i)) * (c + 1));
        }
        return n;
    }
    long long countPalindrome(string s)
    {
        long long x = s.size();
        long long a0 = -1, a1 = -1, cnt = 0;
        for (int i = 0; i < x; ++i)
        {
            if (s[i] == '0')
                cnt++;
            if (s[i] == '1' && a0 == -1)
                a0 = cnt;
            if (s[i] == '1' && a0 != -1)
                a1 = cnt;
        }
        cout << a0 << ' ' << a1 << '\n';
        long long n = 0;
        n += (cnt * (cnt + 1)) / 2;
        cout << n << " ";
        n += ((x - cnt) * (x - cnt + 1)) / 2;
        cout << n << " ";
        if (x - cnt == 0)
            return n;
        if (x - cnt == 1)
        {
            n += opeli(cnt, a0);
            return n;
        }
        n += opeli(cnt, a0);
        cout << n << " ";
        n += opeli(cnt, a1);
        cout << n << " ";
        n += ((a1 - a0) * (a1 - a0 - 1) / 2);
        cout << n << " ";
        n += dpeli(cnt, a0, a1);
        return n;
    }
};
int main()
{
    setIO("");
    ll tc;
    cin >> tc;
    while (tc--)
    {
        string s;
        cin >> s;
        Solution o;
        cout << o.countPalindrome(s) << '\n';
    }
    return 0;
}