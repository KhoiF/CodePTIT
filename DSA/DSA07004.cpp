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
        int res=0;
        char c1, c2;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='(')   st.push(s[i]);
            else{
                if(st.empty())  st.push(s[i]);
                else{
                    if(st.top()=='(')   st.pop();
                    else st.push(s[i]);
                }
            }
        }
        while(!st.empty()){
            c1=st.top(); st.pop();
            c2=st.top(); st.pop();
            if(c1==c2)  res+=1;
            else res+=2;
        }
        cout << res << "\n";
    }
}