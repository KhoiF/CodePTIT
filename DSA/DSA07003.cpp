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
        bool check=0;
        stack<pair<char, bool>> st;
        for(char c : s){
            if(isalpha(c))  continue;
            else if(c=='(') st.push({'(', 0});
            else if(c==')'){
                if(!st.top().second){
                    check=1;
                    break;
                }
                st.pop();
            }
            else{
                if(!st.empty()){
                    st.pop();
                    st.push({'(', 1});
                }
            }
        }
        if(check)   cout << "Yes\n";
        else cout << "No\n";
    }
}