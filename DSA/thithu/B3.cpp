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
    int n; cin >> n;
    int ans = 0;
    stack<pair<int,int>> st;
    F(i,0,n)
    {
        int x; cin >> x;
        int cnt = 1;
        while(st.size() && st.top().first < x)
        {
            ans += st.top().second;
            st.pop();
        }

        if(st.size() && st.top().first == x)
        {
            ans += st.top().second;
            cnt += st.top().second;
            st.pop();

            if(st.size())
            {
                ans += 1;
            }
        }

        else if(st.size())
        {
            ans += 1;
        }

        st.push({x,cnt});
    }
    cout << ans << '\n';
    return 0;
}   