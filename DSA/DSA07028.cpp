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
int n, a[maxn], d[maxn];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int test = 1;
    cin >> test;
    while(test--){
        memset(d, 0, sizeof d);
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        stack<int> st;
        for(int i=1; i<=n; i++){
            if(st.empty())  st.push(i);
            else{
                if(a[st.top()] > a[i]) st.push(i);
                else{
                    while(st.size() && a[st.top()]<=a[i]){
                        int tmp=st.top();
                        st.pop();
                        if(st.size())   d[tmp]=tmp-st.top();
                        else d[tmp]=tmp;
                    }
                    st.push(i);
                } 
            }
        }
        while(st.size()){
            int tmp=st.top();
            st.pop();
            if(st.size())   d[tmp]=tmp-st.top();
            else d[tmp]=tmp;
        }
        for(int i=1; i<=n; i++) cout << d[i] << " ";
        cout << "\n";
    }
}