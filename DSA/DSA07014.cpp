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
        for(int i=s.size()-1; i>=0; i--){
            if(isdigit(s[i]))   st.push(s[i]-'0');
            else{
                int n1=st.top(); st.pop();
                int n2=st.top(); st.pop();
                if(s[i]=='+')   st.push(n1+n2);
                else if(s[i]=='-')  st.push(n1-n2);
                else if(s[i]=='*')  st.push(n1*n2);
                else st.push(n1/n2);
            }
        }
        cout << st.top() << "\n";
    }
}