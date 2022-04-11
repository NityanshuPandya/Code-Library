#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s, j;
        cin >> j >> s;
        int count = 0;
        for (int i = 0; i < j.size(); i++)
        {
            for (int k = 0; k < s.size(); k++)
            {
                if (j[i] == s[k])
                {
                    count++;
                    s.erase(s.begin() + k);
                    k--;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}
