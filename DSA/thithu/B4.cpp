#include <bits/stdc++.h>
#define int long long
#define fater() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define FOR(i,a,b) for(int i = a; i <= b; i++)
#define FOD(i,a,b) for(int i = a; i >= b; i--)
#define F(i,a,b) for(int i = a; i < b; i++)
#define FD(i,a,b) for(int i = a; i > b; i--)
#define pb push_back
#define reset(name, val) memset(name, val, sizeof name)
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
const int maxn = 200005;
const int mod = 1e9 + 7;

using namespace std;

int n, m;
set<int> g[maxn];
bool used[maxn];

void dfs(int u)
{
    used[u] = true;
    for(auto v : g[u])
    {
        if(!used[v]) dfs(v);
    }
}

signed main()
{
    fater();
    cin >> n >> m;
    F(i,0,m)
    {
        int x, y;
        cin >> x >> y;
        g[x].insert(y);
        g[y].insert(x);
    }
    reset(used, false);
    int cnt = 0;
    FOR(i,1,n)
    {
        if(!used[i])
        {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}   