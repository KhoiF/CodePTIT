#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        stack<int> st;
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i]))   st.push(s[i]-'0');
            else{
                int n1=st.top(); st.pop();
                int n2=st.top(); st.pop();
                if(s[i]=='+')   st.push(n2+n1);
                else if(s[i]=='-')  st.push(n2-n1);
                else if(s[i]=='*')  st.push(n2*n1);
                else st.push(n2/n1);
            }
        }
        cout << st.top() << "\n";
    }
}