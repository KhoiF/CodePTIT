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
const int maxn = 30;
const int mod = 1e9 + 7;

using namespace std;

int n, mark[maxn], cnt;
string word[maxn];

void Try(int i, int pre)
{
    if(i == n)
    {
        if(pre == ((1 << 26) - 1)) cnt++;
        return;
    }

    Try(i + 1, pre);
    Try(i + 1, pre | mark[i]);
}

signed main()
{
    fater();
    cin >> n;
    F(i,0,n)
    {
        cin >> word[i];
        int bit = 0;
        for(auto x : word[i])
        {
            bit |= (1 << (x - 'a'));
        }
        mark[i] = bit;
    }
    cnt = 0;
    Try(0,0);
    cout << cnt << '\n';
    return 0;
}   