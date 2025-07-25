#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int q, x;
    cin >> q;
    stack<int> st;
    string s;
    while(q--){
        cin >> s;
        if(s=="PUSH"){
            cin >> x;
            st.push(x);
        }
        else if(s=="POP"){
            if(st.size())   st.pop();
        }
        else{
            if(st.size())   cout << st.top() << "\n";
            else cout << "NONE\n";
        }
    }
}