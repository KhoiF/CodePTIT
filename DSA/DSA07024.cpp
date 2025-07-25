#include<bits/stdc++.h>

using namespace std;
#define maxn 100005
#define ll long long
#define ii pair<int, int>
#define iii pair<pair<int, int>, int>
#define pb push_back
#define bit(mask, i) ((mask>>i)&1)
const int MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
int n, a[maxn];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        stack<int> st;
        int res=0;
        for(int i=1; i<=n; i++){
            if(st.empty())  st.push(i);
            else{
                while(st.size() && a[st.top()]>a[i]){
                    int x=a[st.top()];
                    st.pop();
                    int tmp = st.size() ? st.top() : 0;
                    int y = i-tmp-1;
                    if(x<=y){
                        int s=min(y, x);
                        res=max(res, s);
                    }
                }
                st.push(i);
            }
            
        }
        while(st.size()){
            int x = a[st.top()];
            st.pop();
            int tmp = st.size() ? st.top() : 0;
            int y = n-tmp-1;
            if(x<=y){
                int s=min(y, x);
                res=max(res, s);
            }
        }
        cout << res << "\n";
    }
}