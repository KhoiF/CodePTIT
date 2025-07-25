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
        for(int i=s.size()-1; i>=0; i--){
            if(isalpha(s[i]))   st.push(string(1, s[i]));
            else{
                string s1=st.top(); st.pop();
                string s2=st.top(); st.pop();
                st.push("("+s1+string(1, s[i])+s2+")");
            }
        }
        cout << st.top() << "\n";
    }
}