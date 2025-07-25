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
        stack<string> st;
        for(char c : s){
            if(isalpha(c))  st.push(string(1, c));
            else{
                string s1=st.top(); st.pop();
                string s2=st.top(); st.pop();
                st.push("("+s2+string(1, c)+s1+")");
            }
        }
        cout << st.top() << "\n";
    }
}