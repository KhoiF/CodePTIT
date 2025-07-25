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
int n, a[maxn], d[maxn], res[maxn];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(d, 0, sizeof d);
        memset(res, 0, sizeof res);
        cin >> n;
        for(int i=1; i<=n; i++){
            cin >> a[i];
            d[a[i]]++;
        }
        stack<int> st;
        for(int i=1; i<=n; i++){
            if(st.empty())  st.push(i);
            else{
                while(st.size() && d[a[st.top()]] < d[a[i]]){
                    res[st.top()]=a[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        while(st.size()){
            res[st.top()]=-1;
            st.pop();
        }
        for(int i=1; i<=n; i++) cout << res[i] << " ";
        cout << "\n";
    }
}