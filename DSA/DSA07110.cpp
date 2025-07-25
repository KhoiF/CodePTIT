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
        stack<char> st;
        bool ok=1;
        for(char c : s){
            if(st.empty()){
                st.push(c);
                continue;
            }
            if(c=='(' || c=='{' || c=='[')  st.push(c);
            else{
                if(c==')' && st.top()=='(') st.pop();
                else if(c==']' && st.top()=='[')    st.pop();
                else if(c=='}' && st.top()=='{')    st.pop();
                else{
                    ok=0;
                    break;
                }
            }
        }
        if(st.size())   ok=0;
        if(ok)  cout << "YES\n";
        else cout << "NO\n";
    }
}