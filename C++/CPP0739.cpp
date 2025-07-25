#include<bits/stdc++.h>

using namespace std;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    string s;
    while(t--){
        cin>>s; 
        int dem=1; 
        stack<int>st; 
        st.push(1); 
        for(int i=0; i<s.size(); i++) 
        { 
            dem++; 
            if(s[i]=='I') { 
                while(!st.empty()) 
                { 
                    cout<<st.top(); 
                    st.pop(); 
                } 
            } 
            st.push(dem); 
        } 
        while(!st.empty()) 
        { 
            cout<<st.top(); 
            st.pop(); 
        } 
        cout<<endl; 
    } 
}
  