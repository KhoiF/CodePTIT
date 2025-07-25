#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    while(t--){
        cin >> s;
        stack<int> st;
        st.push(1);
        int dem=1;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='D')   st.push(++dem);
            else{
                while(st.size()){
                    cout << st.top();
                    st.pop();
                }
                st.push(++dem);
            }
        }
        while(st.size()){
            cout << st.top();
            st.pop();
        }
        cout << "\n";
    }
}