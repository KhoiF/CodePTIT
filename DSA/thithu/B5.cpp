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
//const int maxn = ;
const int mod = 1e9 + 7;

using namespace std;

signed main()
{
    fater();
    int n, m, q;
    cin >> n >> m >> q;
    int a[n + 1][n + 1];
    FOR(i,1,n)
    {
        FOR(j,1,n)
        {
            a[i][j] = LONG_LONG_MAX;
        }
        a[i][i] = 0;
    }
    F(i,0,m)
    {
        int x, y, w;
        cin >> x >> y >> w;
        a[x][y] = w;
    }
    FOR(k,1,n)
    {
        FOR(i,1,n)
        {
            FOR(j,1,n)
            {
                a[i][j] = min(a[i][j], max(a[i][k], a[k][j]));
            }
        }
    }
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        (a[l][r] == LONG_LONG_MAX) ? cout << "-1\n" : cout << a[l][r] << '\n';
    }
    return 0;
}   