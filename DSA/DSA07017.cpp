#include<bits/stdc++.h>

using namespace std;
int t, n, a[1000005], minn[1000005], maxx[1000005];
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1; i<=n; i++) cin >> a[i];
        stack<int> st, st2;
        for(int i=1; i<=n; i++){
            while(st2.size() && a[i]>a[st2.top()]){
                maxx[st2.top()]=i;
                st2.pop();
            }
            st2.push(i);
            while(st.size() && a[i]<a[st.top()]){
                minn[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(st.size()){
            minn[st.top()]=-1;
            st.pop();
        }
        while(st2.size()){
            maxx[st2.top()]=-1;
            st2.pop();
        }
        for(int i=1; i<=n; i++){
            if(maxx[i]==-1 || minn[maxx[i]]==-1)    cout << -1 << " ";
            else cout << a[minn[maxx[i]]] << " ";
        }
        cout << "\n";
    }
}