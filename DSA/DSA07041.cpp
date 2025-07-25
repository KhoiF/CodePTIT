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
        for(char c : s){
            if(st.empty() || c=='(') st.push(c);
            else{
                if(st.top()=='(')   st.pop();
                else st.push(c);
            }
        }
        cout << s.size()-st.size() << "\n";
    }
}