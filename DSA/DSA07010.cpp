#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    string s;
    while(t--){
        cin >> s;
        stack<string> st;
        for(int i=s.size()-1; i>=0; i--){
            if(isalpha(s[i]))   st.push(string(1, s[i]));
            else{
                string tmp1=st.top(); st.pop();
                string tmp2=st.top(); st.pop();
                st.push(tmp1+tmp2+string(1,s[i]));
            }
        }
        cout << st.top() << "\n";
    }
}