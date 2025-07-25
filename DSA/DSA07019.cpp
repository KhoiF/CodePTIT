#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t, n, a[100005];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++) cin >> a[i];
        stack<int> st;
        long long res=0;
        for(int i=0; i<n; i++){
            while(st.size() && a[st.top()]>a[i]){
                int x=st.top(); 
                st.pop();
                int y;
                if(st.empty())  y=-1;
                else y=st.top();
                res=max(res, 1ll*a[x]*(i-y-1));
            }
            st.push(i);
        }
        while(st.size()){
            int x=st.top(); 
            st.pop();
            int y;
            if(st.empty())  y=-1;
            else y=st.top();
            res=max(res, 1ll*a[x]*(n-y-1));
        }
        cout << res << "\n";
    }
}