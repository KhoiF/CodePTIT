#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    string s;
    cin >> t;
    cin.ignore();
    while(t--){
        getline(cin, s);
        stringstream ss(s);
        string tmp;
        stack<string> st;
        while(ss >> tmp)    st.push(tmp);
        while(st.size()){
            cout << st.top() << " ";
            st.pop();
        }
        cout << "\n";
    }
}