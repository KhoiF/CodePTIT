#include<bits/stdc++.h>

using namespace std;
#define maxn 1000005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int n, m, a[505][505];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n >> m;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++) cin >> a[i][j];
        }
        int ans=0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(a[i][j]) a[i][j]+=a[i-1][j];
            }
            stack<int> st;
            for(int j=1; j<=m; j++){
                if(st.empty())  st.push(j);
                else{
                    while(st.size() && a[i][j]<a[i][st.top()]){
                        int x=a[i][st.top()];
                        st.pop();
                        int y=st.size() ? st.top() : 0;
                        int s=x*(j-y-1);
                        ans=max(ans, s);
                    }
                    st.push(j);
                }
            }
            while(st.size()){
                int x=a[i][st.top()];
                st.pop();
                int y = st.size() ? st.top() : 0;
                int s=x*(m-y-1);
                ans=max(ans, s);
            }

        }
        cout << ans << "\n";
    }
}