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
    int n, k;
    cin >> n >> k;
    queue<int> q;
    int a[n + 1];
    FOR(i,1,n) cin >> a[i];
    int res[n + 1];
    int cnt = 0;
    FOR(i,1,n)
    {
        q.push(i);
        while(q.size() && (a[q.front()] >= 0 || (q.front() <= (i - k)))) q.pop();
        if(i >= k)
        {
            res[cnt++] = q.size() ? a[q.front()] : 0;
        }
    }
    F(i,0,(n - k) + 1) cout << res[i] << ' ';
    return 0;
}   