#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define int ll

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<vii> vvii;

#define INF INT_MAX
#define MOD 1000000007
#define all(x) x.begin(), x.end()

int ans; vvi adj;
vi sz, l, l2;

void dfs(int u, int p){
    sz[u] = 1; 
    l[u] = l2[u] = 1; // distance from u to parent
    
    int t = 0, t2 = 0;
    for(auto v : adj[u]){
        if(v == p) continue;
        dfs(v, u);

        sz[u] += sz[v];
        l[u] += l[v]+sz[v]; l[u] %= MOD;
        l2[u] += l2[v]+2*l[v]+sz[v]; l2[u] %= MOD;

        ans += (t2*l[v])%MOD; ans %= MOD;
        ans += (t*l2[v])%MOD; ans %= MOD;

        t += l[v]; t %= MOD;
        t2 += l2[v]; t2 %= MOD;
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int T; cin >> T;
    while(T--){
        int N; cin >> N;

        adj.clear(); adj.resize(N);
        for(int x = 0; x < N-1; x++){
            int u, v; cin >> u >> v;
            u--, v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        sz.clear(); sz.resize(N);
        l.clear(); l.resize(N);
        l2.clear(); l2.resize(N);

        ans = 0; dfs(0, 0);
        cout << ans << "\n";
    }

    return 0;
}