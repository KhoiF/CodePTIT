#include<bits/stdc++.h>

using namespace std;
int t, n, a[100005], res[100005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        stack<int> st;
        for(int i=1; i<=n; i++){
            while(st.size() && a[i]>a[st.top()]){
                res[st.top()]=a[i];
                st.pop();
            }
            st.push(i);
        }
        while(st.size()){
            res[st.top()]=-1;
            st.pop();
        }
        for(int i=1; i<=n; i++) cout << res[i] << " ";
        cout << "\n";
    }
}